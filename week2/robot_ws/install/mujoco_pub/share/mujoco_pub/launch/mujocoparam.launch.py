from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mujoco_pub',
            executable='robot_ip',
            name='robot_ip_node',
            output='screen',
            parameters=[
                {'xml_path': '/home/wyp/test/robot_learning/week1/ip.xml'},
                {'time_step': 0.01}
            ]
        ),
        Node(
            package='mujoco_pub',
            executable='torque_set_service',
            name='torque_set_service_node',
            output='screen'
        )
    ])