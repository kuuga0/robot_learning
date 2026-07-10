import rclpy
from rclpy.node import Node

def main():
    rclpy.init()
    node = Node('python_node_demo')
    node.get_logger().info('Hello你好 来自 Python node!')
    rclpy.spin(node)
    rclpy.shutdown()