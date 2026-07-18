import rclpy
from rclpy.node import Node
from detect_interfaces.srv import FaceDetector
from ament_index_python.packages import get_package_share_directory
from cv_bridge import CvBridge
import cv2
import face_recognition
import time
from rcl_interfaces.msg import SetParametersResult

class FaceDetectService(Node):
    def __init__(self):
        super().__init__('face_detect_service')
        self.bridge = CvBridge()
        self.service = self.create_service(FaceDetector, 'face_detect', self.detect_callback)
        self.get_logger().info('人脸检测服务已启动，等待请求...')
        self.default_image_path = get_package_share_directory('py_service') + '/resource/default.png'
        self.declare_parameter('face_locations_upsample_times', 1)
        self.declare_parameter('face_locations_model', 'hog')
        self.upsample_times = self.get_parameter('face_locations_upsample_times').value
        self.model = self.get_parameter('face_locations_model').value  # Model to use for face detection ('hog' or 'cnn')
        self.add_on_set_parameters_callback(self.parameter_callback)

    def detect_callback(self, request, response):
        if request.image is not None and request.image.data:
            # Convert the ROS Image message to OpenCV format
            cv_image = self.bridge.imgmsg_to_cv2(request.image)
        else:
            # Load the default image if no image data is provided
            cv_image = cv2.imread(self.default_image_path)
        start_time = time.time()
        self.get_logger().info('加载图像完成，开始进行人脸检测...')
        face_locations = face_recognition.face_locations(cv_image, number_of_times_to_upsample=self.upsample_times, model=self.model)
        end_time = time.time()
        self.get_logger().info(f'人脸检测完成，检测到 {len(face_locations)} 张人脸，耗时 {end_time - start_time:.2f} 秒。')
        response.number = len(face_locations)
        response.use_time = end_time - start_time
        for (top, right, bottom, left) in face_locations:
            response.top.append(top)
            response.right.append(right)
            response.bottom.append(bottom)
            response.left.append(left)
        return response
    
    def parameter_callback(self, params):
        for param in params:
            self.get_logger().info(f'参数 {param.name} 已更新为 {param.value}')
            if param.name == 'face_locations_upsample_times':
                self.upsample_times = param.value
            elif param.name == 'face_locations_model':
                self.model = param.value
        return SetParametersResult(successful=True)
    
def main(args=None):
    rclpy.init(args=args)
    node = FaceDetectService()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
        