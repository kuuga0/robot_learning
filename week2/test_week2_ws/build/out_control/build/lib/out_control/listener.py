import rclpy
from rclpy.node import Node
from mj_interfaces.msg import IpInterface

class ListenerNode(Node):
    def __init__(self):
        super().__init__('listener_node')
        self.subscription = self.create_subscription(
            IpInterface,
            'ip_status',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info(
            f'接收到消息: theta={msg.theta:.3f}, omega={msg.omega.y:.3f}, torque={msg.torque.y:.3f}, position=({msg.position.x:.3f}, {msg.position.y:.3f}, {msg.position.z:.3f})')

def main(args=None):
    rclpy.init(args=args)
    listener_node = ListenerNode()
    rclpy.spin(listener_node)
    listener_node.destroy_node()
    rclpy.shutdown()