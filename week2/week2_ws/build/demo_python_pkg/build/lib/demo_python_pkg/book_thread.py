import threading
import requests
import rclpy
from rclpy.node import Node

class Download(Node):
    def __init__(self):
        super().__init__('download_node')

    def download(self, url, callback):
        self.get_logger().info(f" 线程：{threading.get_ident()} 开始下载： {url}")
        response = requests.get(url)
        response.encoding = 'utf-8'
        callback(url, response.text)

    def start_download(self, url, callback):
        thread = threading.Thread(target=self.download, args=(url, callback))
        thread.start()

def download_finish_callback(url, result):
    print(f" {url} 下载完成， 共：{len(result)} 字节，内容为：{result[:]}...")

def main():
    rclpy.init()
    download = Download()
    # download.start_download("https://www.baidu.com", download_finish_callback)
    # download.start_download("https://www.sina.com.cn", download_finish_callback)
    # download.start_download("https://www.163.com", download_finish_callback)
    download.start_download("http://localhost:8000/novel1.txt", download_finish_callback)
    download.start_download("http://localhost:8000/novel2.txt", download_finish_callback)
    download.start_download("http://localhost:8000/novel3.txt", download_finish_callback)
    rclpy.spin(download)
    rclpy.shutdown()
