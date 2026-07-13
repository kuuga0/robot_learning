#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interfaces__msg__RobotStatus() -> *const std::ffi::c_void;
}

#[link(name = "robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_interfaces__msg__RobotStatus__init(msg: *mut RobotStatus) -> bool;
    fn robot_interfaces__msg__RobotStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>, size: usize) -> bool;
    fn robot_interfaces__msg__RobotStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>);
    fn robot_interfaces__msg__RobotStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>) -> bool;
}

// Corresponds to robot_interfaces__msg__RobotStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 单摆状态消息

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {
    /// 时间戳
    pub time: std_msgs::msg::rmw::Header,

    /// x: 小车位置[m], y: 摆角[rad], z: 0
    pub pose: geometry_msgs::msg::rmw::Point,

    /// linear.x: 小车速度[m/s], angular.z: 摆角速度[rad/s]
    pub twist: geometry_msgs::msg::rmw::Twist,

    /// 当前控制量，调试用
    pub control: std_msgs::msg::rmw::Float64,

    /// true=已稳定倒立
    pub stable: std_msgs::msg::rmw::Bool,

}



impl Default for RobotStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interfaces__msg__RobotStatus__init(&mut msg as *mut _) {
        panic!("Call to robot_interfaces__msg__RobotStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interfaces__msg__RobotStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interfaces__msg__RobotStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interfaces__msg__RobotStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotStatus where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interfaces/msg/RobotStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interfaces__msg__RobotStatus() }
  }
}


