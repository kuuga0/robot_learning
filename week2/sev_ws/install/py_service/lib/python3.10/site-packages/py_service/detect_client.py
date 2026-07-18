import rclpy
from rclpy.node import Node
from detect_interfaces.srv import FaceDetector
from sensor_msgs.msg import Image
from ament_index_python.packages import get_package_share_directory
from cv_bridge import CvBridge
import cv2
from rcl_interfaces.srv import SetParameters
from rcl_interfaces.msg import Parameter, ParameterType, ParameterValue

class FaceDetectClient(Node):
    def __init__(self):
        super().__init__('face_detect_client')
        self.client = self.create_client(FaceDetector, 'face_detect')
        self.get_logger().info('人脸检测客户端已启动，等待服务...')
        self.bridge = CvBridge()
        self.test1_image_path = get_package_share_directory('py_service') + '/resource/test1.png'
        self.test2_image_path = get_package_share_directory('py_service') + '/resource/test2.png'
        self.test3_image_path = get_package_share_directory('py_service') + '/resource/test3.png'   
        self.image = cv2.imread(self.test2_image_path)  # Load the test image

    def send_request(self):
        while self.client.wait_for_service(timeout_sec=1.0) == False:
            self.get_logger().info('等待人脸检测服务启动...')

        request = FaceDetector.Request()
        request.image = self.bridge.cv2_to_imgmsg(self.image)
        future = self.client.call_async(request)
        # def request_callback(result_future):
        #     response = result_future.result()
        #     self.get_logger().info(f'检测到 {response.number} 张人脸，耗时 {response.use_time:.2f} 秒。')
        #     self.show_face_locations(response)
        # future.add_done_callback(request_callback)

        rclpy.spin_until_future_complete(self, future)

        response = future.result()
        self.get_logger().info(f'检测到 {response.number} 张人脸，耗时 {response.use_time:.2f} 秒。')
        #self.show_face_locations(response)

    def show_face_locations(self, response):
        for i in range(response.number):
            top = response.top[i]
            right = response.right[i]
            bottom = response.bottom[i]
            left = response.left[i]
            cv2.rectangle(self.image, (left, top), (right, bottom), (255, 0, 0), 2)
        cv2.imshow('Detected Faces', self.image)
        cv2.waitKey(0)

    def call_set_parameters(self, param):
        client = self.create_client(SetParameters, '/face_detect_service/set_parameters')
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('等待参数设置服务启动...')
        request = SetParameters.Request()
        request.parameters = param
        future = client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info('参数设置成功')
        else:
            self.get_logger().error('参数设置失败')
        response = future.result()
        return response
    
    def set_face_detection_model(self, model):
        param = Parameter()
        param.name = 'face_locations_model'
        new_value = ParameterValue()
        new_value.type = ParameterType.PARAMETER_STRING
        new_value.string_value = model
        param.value = new_value
        response = self.call_set_parameters([param])
        for result in response.results:
            if result.successful:
                self.get_logger().info(f'参数 {param.name} 设置成功')
            else:
                self.get_logger().error(f'参数 {param.name} 设置失败: {result.reason}')

def main(args=None):
    rclpy.init(args=args)
    node = FaceDetectClient()
    node.set_face_detection_model('hog')  
    node.send_request()
    node.set_face_detection_model('cnn')
    node.send_request()
    node.destroy_node()
    rclpy.shutdown()