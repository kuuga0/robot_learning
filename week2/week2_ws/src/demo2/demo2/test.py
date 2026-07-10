import rclpy
from rclpy.node import Node

def main():
    rclpy.init()
    node = Node('node_test')
    node.get_logger().info('Hello你好1111 from Python node_test!')
    rclpy.spin(node)
    rclpy.shutdown()