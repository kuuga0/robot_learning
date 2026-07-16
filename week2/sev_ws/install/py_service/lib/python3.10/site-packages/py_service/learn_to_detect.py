import face_recognition
import cv2
from ament_index_python.packages import get_package_share_directory

def main():
    default_image_path = get_package_share_directory('py_service') + '/resource/default.png'
    # Load the default image and encode it
    default_image = cv2.imread(default_image_path)
    face_locations = face_recognition.face_locations(default_image, number_of_times_to_upsample=1, model='hog')

    for top, right, bottom, left in face_locations:
        cv2.rectangle(default_image, (left, top), (right, bottom), (255, 0, 0), 4)

    cv2.imshow('Detect Image', default_image)
    cv2.waitKey(0)