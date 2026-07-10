import rclpy
from rclpy.node import Node

class PersonNode(Node):
    def __init__(self, name:str, age:int, node_name:str) -> None:
        super().__init__(node_name)
        print("PersonNode init")
        self.name = name
        self.age = age

    def fight(self, enemy_name:str):
        self.get_logger().info(f"{self.name} ,who's {self.age} years old, is fighting with {enemy_name}")

def main():
    rclpy.init()
    node = PersonNode("KUUGA", 25, "hero_node")
    node.fight("哥斯拉")
    rclpy.spin(node)
    rclpy.shutdown()