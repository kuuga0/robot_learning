#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "status_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__status_interfaces__msg__Systemstatus() -> *const std::ffi::c_void;
}

#[link(name = "status_interfaces__rosidl_generator_c")]
extern "C" {
    fn status_interfaces__msg__Systemstatus__init(msg: *mut Systemstatus) -> bool;
    fn status_interfaces__msg__Systemstatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Systemstatus>, size: usize) -> bool;
    fn status_interfaces__msg__Systemstatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Systemstatus>);
    fn status_interfaces__msg__Systemstatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Systemstatus>, out_seq: *mut rosidl_runtime_rs::Sequence<Systemstatus>) -> bool;
}

// Corresponds to status_interfaces__msg__Systemstatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Systemstatus {
    /// 记录时间
    pub stamp: builtin_interfaces::msg::rmw::Time,

    /// 系统名称
    pub host_name: rosidl_runtime_rs::String,

    /// CPU使用率
    pub cpu_percent: f32,

    /// 内存使用率
    pub memory_percent: f32,

    /// 内存总量（MB）
    pub memory_total: f32,

    /// 内存剩余量（MB）
    pub memory_available: f32,

    /// 网络发送数据总量（MB）
    pub net_sent: f64,

    /// 网络接受数据总量（MB）
    pub net_recv: f64,

}



impl Default for Systemstatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !status_interfaces__msg__Systemstatus__init(&mut msg as *mut _) {
        panic!("Call to status_interfaces__msg__Systemstatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Systemstatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { status_interfaces__msg__Systemstatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { status_interfaces__msg__Systemstatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { status_interfaces__msg__Systemstatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Systemstatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Systemstatus where Self: Sized {
  const TYPE_NAME: &'static str = "status_interfaces/msg/Systemstatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__status_interfaces__msg__Systemstatus() }
  }
}


