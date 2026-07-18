import launch
import launch_ros

def generate_launch_description():
    action_declare_parameter_upsample_times = launch.actions.DeclareLaunchArgument(
        'face_locations_upsample_times',
        default_value='1',
        description='Number of times to upsample the image for face detection'
    )
    action_node_face_detect = launch_ros.actions.Node(
        package='py_service',
        executable='face_detect',
        parameters=[{'face_locations_upsample_times': 
                     launch.substitutions.LaunchConfiguration('face_locations_upsample_times')}],
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
            action_declare_parameter_upsample_times,
            action_node_face_detect,
            action_node_detect_client
        ]
    )
    return launch_description