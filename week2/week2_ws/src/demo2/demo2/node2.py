import rclpy
from rclpy.node import Node

def main():
    rclpy.init()
    node = Node('node2')
    node.get_logger().info('Hello你好1111 from Python node2!')
    rclpy.spin(node)
    rclpy.shutdown()