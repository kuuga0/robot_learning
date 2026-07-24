import rclpy
from rclpy.node import Node
from rcl_interfaces.srv import SetParameters
from rcl_interfaces.msg import Parameter, ParameterType, ParameterValue

class MjparamNode(Node):
    def __init__(self):
        super().__init__('mj_param_node')
        self.cli = self.create_client(SetParameters, '/mj_sim_node/set_parameters')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('服务未就绪，正在等待...')
        self.req = SetParameters.Request()

    def set_control_torque(self, torque_value):
        param = Parameter()
        param.name = 'control_torque'
        new_torque_value = ParameterValue()
        new_torque_value.type = ParameterType.PARAMETER_DOUBLE
        new_torque_value.double_value = torque_value
        param.value = new_torque_value
        self.req.parameters = [param]

        future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, future)

        response = future.result()
        return response

def main(args=None):
    rclpy.init(args=args)
    mj_param_node = MjparamNode()

    # Example: Set control torque to 10.0
    response = mj_param_node.set_control_torque(20.0)
    if response is not None:
        for result in response.results:
            if result.successful:
                mj_param_node.get_logger().info('控制力矩设置成功')
            else:
                mj_param_node.get_logger().info('控制力矩设置失败')

    mj_param_node.destroy_node()
    rclpy.shutdown()