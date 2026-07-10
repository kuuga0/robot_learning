import rclpy
from demo_python_pkg.person import PersonNode

class Writer(PersonNode):
    def __init__(self, book:str, name:str, age:int, node_name:str) -> None:
        print("Writer init")
        super().__init__(name, age, node_name)
        self.book = book

    def write(self):
        self.get_logger().info(f"{self.name} ,who's {self.age} years old, is writing a book named {self.book}")
        
def main():
    rclpy.init()
    node = Writer("英雄战记", "神山", 28, "writer_node")
    node.fight("金刚")
    node.write()
    rclpy.spin(node)
    rclpy.shutdown()