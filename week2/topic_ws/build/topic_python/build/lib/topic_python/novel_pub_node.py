import rclpy
from rclpy.node import Node
import requests
from example_interfaces.msg import String
from queue import Queue

class NovelPublisher(Node):
    def __init__(self, node_name: str):
        super().__init__(node_name)
        self.novel_queue = Queue()
        self.publisher = self.create_publisher(String, 'novel', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)

    def download_novel(self, url: str):
        response = requests.get(url)
        response.encoding = 'utf-8'
        self.get_logger().info(f'下载完成： {url}')
        for line in response.text.splitlines():
            self.novel_queue.put(line)

    def timer_callback(self):
        if self.novel_queue.qsize() > 0:
            msg = String()
            msg.data = self.novel_queue.get()
            self.publisher.publish(msg)
            self.get_logger().info(f'发布一行小说： {msg.data}')

def main():
    rclpy.init()
    novel_publisher = NovelPublisher('novel_publisher')
    novel_publisher.download_novel('http://localhost:8000/novel1.txt')
    rclpy.spin(novel_publisher)
    print('小说发布节点已关闭')
    rclpy.shutdown()
    