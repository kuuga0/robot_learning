import rclpy
from rclpy.node import Node
from mj_interfaces.msg import IpInterface
from mj_interfaces.srv import TorqueSrv
from rcl_interfaces.msg import SetParametersResult
from ament_index_python.packages import get_package_share_directory
import mujoco
import numpy as np

class MjSimNode(Node):
    def __init__(self):
        super().__init__('mj_sim_node')
        self.declare_parameter('xml_path', get_package_share_directory('mj_sim') + '/resource/ip.xml')
        self.declare_parameter('time_step', 0.01)
        self.declare_parameter('control_torque', None)  # Default to None if not set
        self.model = mujoco.MjModel.from_xml_path(
            self.get_parameter('xml_path').value)
        self.model.opt.timestep = self.get_parameter('time_step').value
        self.data = mujoco.MjData(self.model)
        self.get_logger().info(
            f'已加载模型: {self.get_parameter("xml_path").value}, 时间步长: {self.model.opt.timestep}')
        self.status_pub = self.create_publisher(IpInterface, 'ip_status', 10)
        self.torque_srv = self.create_service(TorqueSrv, 'set_torque', self.handle_set_torque)
        self.timer = self.create_timer(0.01, self.callback)
        self.step = 0
        self.control_torque = self.get_parameter('control_torque').value
        self.add_on_set_parameters_callback(self.parameter_callback)

    def parameter_callback(self, parameters):
        for param in parameters:
            if param.name == 'control_torque':
                self.control_torque = param.value
                self.get_logger().info(f'控制力矩已更新为: {self.control_torque:.3f}N·m')
        return SetParametersResult(successful=True)

    def handle_set_torque(self, request, response):
        if request is not None:
            self.control_torque = request.torque.y
            response.success = True
            response.message = f'控制力矩已设置为: {self.control_torque:.3f}N·m'
            self.get_logger().info(f'接收到控制力矩: {self.control_torque:.3f}N·m')
        else:
            response.success = False
            response.message = '请求无效，未设置控制力矩'
        return response

    def callback(self):
        # Apply control torque to the first actuator
        if self.control_torque is not None:
            self.data.ctrl[0] = self.control_torque
        else:
            self.data.ctrl[0] = 5.0 * np.sin(self.step * 0.01)  # Default control if no torque is set
        mujoco.mj_step(self.model, self.data)

        msg = IpInterface()
        msg.stamp = self.get_clock().now().to_msg()
        msg.theta = self.data.qpos[0]
        msg.omega.y = self.data.qvel[0]
        msg.torque.y = self.data.qfrc_actuator[0]
        site_id = mujoco.mj_name2id(self.model, mujoco.mjtObj.mjOBJ_SITE, 'mass_site')
        msg.position.x = self.data.site_xpos[site_id][0]
        msg.position.y = self.data.site_xpos[site_id][1]
        msg.position.z = self.data.site_xpos[site_id][2]

        self.status_pub.publish(msg)
        self.step += 1

        if self.step % 300 == 0:
            self.get_logger().info(
                f'Time: {self.step}, Angle: {msg.theta:.3f}弧度, Vel: {msg.omega.y:.3f}弧度/秒, Control Torque: {msg.torque.y:.3f}N·m')
        self.control_torque = None  # Reset control torque after each step

def main():
    rclpy.init()
    node = MjSimNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()