#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mj_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mj_interfaces__msg__IpInterface() -> *const std::ffi::c_void;
}

#[link(name = "mj_interfaces__rosidl_generator_c")]
extern "C" {
    fn mj_interfaces__msg__IpInterface__init(msg: *mut IpInterface) -> bool;
    fn mj_interfaces__msg__IpInterface__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IpInterface>, size: usize) -> bool;
    fn mj_interfaces__msg__IpInterface__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IpInterface>);
    fn mj_interfaces__msg__IpInterface__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IpInterface>, out_seq: *mut rosidl_runtime_rs::Sequence<IpInterface>) -> bool;
}

// Corresponds to mj_interfaces__msg__IpInterface
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IpInterface {
    /// 时间戳
    pub stamp: builtin_interfaces::msg::rmw::Time,

    /// 角度
    pub theta: f64,

    /// 角速度
    pub omega: geometry_msgs::msg::rmw::Vector3,

    /// 力矩
    pub torque: geometry_msgs::msg::rmw::Vector3,

    /// 末端位置
    pub position: geometry_msgs::msg::rmw::Point,

}



impl Default for IpInterface {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mj_interfaces__msg__IpInterface__init(&mut msg as *mut _) {
        panic!("Call to mj_interfaces__msg__IpInterface__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IpInterface {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mj_interfaces__msg__IpInterface__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mj_interfaces__msg__IpInterface__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mj_interfaces__msg__IpInterface__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IpInterface {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IpInterface where Self: Sized {
  const TYPE_NAME: &'static str = "mj_interfaces/msg/IpInterface";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mj_interfaces__msg__IpInterface() }
  }
}


