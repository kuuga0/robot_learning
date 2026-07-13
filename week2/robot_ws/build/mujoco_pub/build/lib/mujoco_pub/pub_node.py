import rclpy
from rclpy.node import Node
from robot_interfaces.msg import RobotStatus
import mujoco
import numpy as np 

class Robot(Node):
    def __init__(self, node_name:str):
        super().__init__(node_name)
        self.model = mujoco.MjModel.from_xml_path(
            '/home/wyp/test/robot_learning/week1/ip.xml')
        self.data = mujoco.MjData(self.model)
        self.status_pub = self.create_publisher(RobotStatus, 'robo_status', 10)
        self.timer = self.create_timer(0.01, self.callback)
        self.step = 0

    def callback(self):
        self.data.ctrl[0] = 5.0 * np.sin(self.step * 0.01)
        mujoco.mj_step(self.model, self.data)

        msg = RobotStatus()
        msg.time.stamp = self.get_clock().now().to_msg()
        msg.pose.x = self.data.qpos[0]
        msg.twist.angular.y = self.data.qvel[0]
        msg.control.data = self.data.qfrc_actuator[0]

        self.status_pub.publish(msg)
        self.step += 1

        if self.step % 300 == 0:
            self.get_logger().info(f'Angle: {msg.pose.x:.3f}弧度, Vel: {msg.twist.angular.y:.3f}弧度/秒')

def main():
    rclpy.init()
    node = Robot('robot_ip')
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

