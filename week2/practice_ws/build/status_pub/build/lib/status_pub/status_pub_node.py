import rclpy
from rclpy.node import Node
from status_interfaces.msg import Systemstatus
import psutil
import platform

class SysStatus(Node):
    def __init__(self, node_name:str):
        super().__init__(node_name)
        self.status_publisher = self.create_publisher(Systemstatus, 'status', 10)
        self.timer = self.create_timer(1.0, self.callback)

    def callback(self):
        cpu_per = psutil.cpu_percent()
        memory_info = psutil.virtual_memory()
        net_io_counters = psutil.net_io_counters()

        msg = Systemstatus()
        msg.stamp = self.get_clock().now().to_msg()
        msg.host_name = platform.node()
        msg.cpu_percent = cpu_per
        msg.memory_percent = memory_info.percent
        msg.memory_total = memory_info.total / 1024 / 1024
        msg.memory_available = memory_info.available / 1024 / 1024
        msg.net_sent = net_io_counters.bytes_sent / 1024 / 1024
        msg.net_recv = net_io_counters.bytes_recv / 1024 / 1024

        self.get_logger().info(f'发布：{str(msg)}')
        self.status_publisher.publish(msg)

def main():
    rclpy.init()
    node = SysStatus('status_pub')
    rclpy.spin(node)
    rclpy.shutdown()