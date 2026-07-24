#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "mj_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mj_interfaces__srv__TorqueSrv_Request() -> *const std::ffi::c_void;
}

#[link(name = "mj_interfaces__rosidl_generator_c")]
extern "C" {
    fn mj_interfaces__srv__TorqueSrv_Request__init(msg: *mut TorqueSrv_Request) -> bool;
    fn mj_interfaces__srv__TorqueSrv_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TorqueSrv_Request>, size: usize) -> bool;
    fn mj_interfaces__srv__TorqueSrv_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TorqueSrv_Request>);
    fn mj_interfaces__srv__TorqueSrv_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TorqueSrv_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TorqueSrv_Request>) -> bool;
}

// Corresponds to mj_interfaces__srv__TorqueSrv_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TorqueSrv_Request {
    /// 具体的值
    pub torque: geometry_msgs::msg::rmw::Vector3,

}



impl Default for TorqueSrv_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mj_interfaces__srv__TorqueSrv_Request__init(&mut msg as *mut _) {
        panic!("Call to mj_interfaces__srv__TorqueSrv_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TorqueSrv_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mj_interfaces__srv__TorqueSrv_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mj_interfaces__srv__TorqueSrv_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mj_interfaces__srv__TorqueSrv_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TorqueSrv_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TorqueSrv_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mj_interfaces/srv/TorqueSrv_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mj_interfaces__srv__TorqueSrv_Request() }
  }
}


#[link(name = "mj_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mj_interfaces__srv__TorqueSrv_Response() -> *const std::ffi::c_void;
}

#[link(name = "mj_interfaces__rosidl_generator_c")]
extern "C" {
    fn mj_interfaces__srv__TorqueSrv_Response__init(msg: *mut TorqueSrv_Response) -> bool;
    fn mj_interfaces__srv__TorqueSrv_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TorqueSrv_Response>, size: usize) -> bool;
    fn mj_interfaces__srv__TorqueSrv_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TorqueSrv_Response>);
    fn mj_interfaces__srv__TorqueSrv_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TorqueSrv_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TorqueSrv_Response>) -> bool;
}

// Corresponds to mj_interfaces__srv__TorqueSrv_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TorqueSrv_Response {
    /// 是否成功
    pub success: bool,

    /// 消息
    pub message: rosidl_runtime_rs::String,

}



impl Default for TorqueSrv_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mj_interfaces__srv__TorqueSrv_Response__init(&mut msg as *mut _) {
        panic!("Call to mj_interfaces__srv__TorqueSrv_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TorqueSrv_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mj_interfaces__srv__TorqueSrv_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mj_interfaces__srv__TorqueSrv_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mj_interfaces__srv__TorqueSrv_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TorqueSrv_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TorqueSrv_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mj_interfaces/srv/TorqueSrv_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mj_interfaces__srv__TorqueSrv_Response() }
  }
}






#[link(name = "mj_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mj_interfaces__srv__TorqueSrv() -> *const std::ffi::c_void;
}

// Corresponds to mj_interfaces__srv__TorqueSrv
#[allow(missing_docs, non_camel_case_types)]
pub struct TorqueSrv;

impl rosidl_runtime_rs::Service for TorqueSrv {
    type Request = TorqueSrv_Request;
    type Response = TorqueSrv_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mj_interfaces__srv__TorqueSrv() }
    }
}


