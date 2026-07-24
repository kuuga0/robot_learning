import launch
import launch_ros

def generate_launch_description():
    action_declare_parameter_control_torque = launch.actions.DeclareLaunchArgument(
        'control_torque',
        default_value= None,
        description='Control torque value to be set in the mj_sim_node'
    )
    action_node_mj_client = launch_ros.actions.Node(
        package='out_control',
        executable='mj_client_node',
        output='screen',
        name='mj_client_node'
    )
    action_node_mj_param = launch_ros.actions.Node(
        package='out_control',
        executable='mj_param_node',
        output='screen',
        name='mj_param_node'
    )
    action_node_listener = launch_ros.actions.Node(
        package='out_control',
        executable='listener_node',
        output='screen',
        name='listener_node'
    )
    action_node_mj_sim = launch_ros.actions.Node(
        package='mj_sim',
        executable='mj_sim_node',
        parameters=[{'control_torque': launch.substitutions.LaunchConfiguration('control_torque')}],
        output='screen',
        name='mj_sim_node'
    )

    launch_description = launch.LaunchDescription(
        [
            action_declare_parameter_control_torque,
            action_node_mj_sim,
            action_node_mj_client,
            action_node_mj_param,
            action_node_listener,
        ]
    )
    return launch_description