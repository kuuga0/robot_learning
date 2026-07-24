import rclpy
from rclpy.node import Node
from robot_interfaces.srv import TorqueSet

class TorqueSetService(Node):
    def __init__(self):
        super().__init__('torque_set_service')
        self.srv = self.create_service(TorqueSet, 'set_torque', self.set_torque_callback)
        self.get_logger().info('力矩设置服务已启动，等待请求...')
        self.torque_value = 0.0  # Initialize the torque value

    def set_torque_callback(self, request, response):
        # Here you would implement the logic to set the torque based on the request
        # For demonstration purposes, we'll just log the received torque value
        self.torque_value = request.torque
        self.get_logger().info(f'收到力矩值: {request.torque}')
        
        # You can add your logic to apply the torque to the robot here
        
        response.success = True  # Indicate that the torque was set successfully
        response.msg = f'力矩值 {request.torque} 已设置成功'
        return response

def main(args=None):
    rclpy.init(args=args)
    torque_set_service = TorqueSetService()
    rclpy.spin(torque_set_service)
    torque_set_service.destroy_node()
    rclpy.shutdown()