import rclpy
from rclpy.node import Node
from mj_interfaces.srv import TorqueSrv

class MjClientNode(Node):
    def __init__(self):
        super().__init__('mj_client_node')
        self.cli = self.create_client(TorqueSrv, 'set_torque')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('服务未就绪，正在等待...')
        self.req = TorqueSrv.Request()

    def send_request(self, torque_value):
        self.req.torque.y = torque_value
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)

        response = self.future.result()
        if response is not None:
            if response.success:
                self.get_logger().info(f'{response.message}')
            else:
                self.get_logger().info(f'请求失败: {response.message}')

def main(args=None):
    rclpy.init(args=args)
    mj_client_node = MjClientNode()

    # Example: Send a torque value of 10.0
    mj_client_node.send_request(10.0)

    mj_client_node.destroy_node()
    rclpy.shutdown()