import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
from queue import Queue
from pathlib import Path
import threading

class NovelSubscriber(Node):
    def __init__(self, node_name: str):
        super().__init__(node_name)
        self.subscriber = self.create_subscription(String, 'novel', self.novel_callback, 10)
        self.novel_queue = Queue()
        self.file_path = Path.home() / 'test'/'robot_learning'/'week2'/'topic_ws'/'novel_copy.txt'
        self.file_path.parent.mkdir(parents=True, exist_ok=True)
        self.running = True
        self.writer_thread = threading.Thread(target=self.write_novel_to_file, daemon=True)
        self.writer_thread.start()

    def novel_callback(self, msg: String):
        self.novel_queue.put(msg.data)

    def write_novel_to_file(self):
        self.get_logger().info(f'启动线程，写入文件：{self.file_path}')
        while self.running:
            try:
                line = self.novel_queue.get(timeout=1.0)
                if line.strip():
                    with open(self.file_path, 'a', encoding='utf-8') as f:  # 只写入非空行
                        f.write(line + '\n')
            
            except Exception:
                continue

        self.get_logger().info(f'小说已写入文件： {self.file_path}，退出线程')
    
    def write_all(self):
        with open(self.file_path, 'a', encoding='utf-8') as f:
            while not self.novel_queue.empty():
                line = self.novel_queue.get_nowait()
                if line.strip():
                    f.write(line + '\n')
        self.get_logger().info(f'已经全部写入文件：{self.file_path}')

def main():
    rclpy.init()
    novel_subscriber = NovelSubscriber('novel_subscriber')
    try: 
        rclpy.spin(novel_subscriber)
    except KeyboardInterrupt:
        novel_subscriber.get_logger().info(f'程序中断，开始关闭')
    finally:
        novel_subscriber.running = False
        novel_subscriber.writer_thread.join(timeout=3.0)
        novel_subscriber.get_logger().info(f'将剩余文字写入文件：{novel_subscriber.file_path}')
        novel_subscriber.write_all()
        novel_subscriber.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()
        print('全部结束')
