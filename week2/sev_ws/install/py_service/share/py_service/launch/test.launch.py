import launch
import launch_ros

def generate_launch_description():
    action_node_face_detect = launch_ros.actions.Node(
        package='py_service',
        executable='face_detect',
        output='screen',
        name='face_detect_service'
    )
    action_node_detect_client = launch_ros.actions.Node(
        package='py_service',
        executable='detect_client',
        output='screen',
        name='face_detect_client'
    )

    launch_description = launch.LaunchDescription(
        [
            action_node_face_detect,
            action_node_detect_client
        ]
    )
    return launch_description