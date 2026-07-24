#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interfaces__srv__TorqueSet_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_interfaces__srv__TorqueSet_Request__init(msg: *mut TorqueSet_Request) -> bool;
    fn robot_interfaces__srv__TorqueSet_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TorqueSet_Request>, size: usize) -> bool;
    fn robot_interfaces__srv__TorqueSet_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TorqueSet_Request>);
    fn robot_interfaces__srv__TorqueSet_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TorqueSet_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TorqueSet_Request>) -> bool;
}

// Corresponds to robot_interfaces__srv__TorqueSet_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TorqueSet_Request {
    /// 力矩
    pub torque: f64,

}



impl Default for TorqueSet_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interfaces__srv__TorqueSet_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_interfaces__srv__TorqueSet_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TorqueSet_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interfaces__srv__TorqueSet_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interfaces__srv__TorqueSet_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interfaces__srv__TorqueSet_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TorqueSet_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TorqueSet_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interfaces/srv/TorqueSet_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interfaces__srv__TorqueSet_Request() }
  }
}


#[link(name = "robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interfaces__srv__TorqueSet_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_interfaces__srv__TorqueSet_Response__init(msg: *mut TorqueSet_Response) -> bool;
    fn robot_interfaces__srv__TorqueSet_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TorqueSet_Response>, size: usize) -> bool;
    fn robot_interfaces__srv__TorqueSet_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TorqueSet_Response>);
    fn robot_interfaces__srv__TorqueSet_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TorqueSet_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TorqueSet_Response>) -> bool;
}

// Corresponds to robot_interfaces__srv__TorqueSet_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TorqueSet_Response {
    /// 成功
    pub success: bool,

    /// 消息
    pub msg: rosidl_runtime_rs::String,

}



impl Default for TorqueSet_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interfaces__srv__TorqueSet_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_interfaces__srv__TorqueSet_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TorqueSet_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interfaces__srv__TorqueSet_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interfaces__srv__TorqueSet_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interfaces__srv__TorqueSet_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TorqueSet_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TorqueSet_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interfaces/srv/TorqueSet_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interfaces__srv__TorqueSet_Response() }
  }
}






#[link(name = "robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_interfaces__srv__TorqueSet() -> *const std::ffi::c_void;
}

// Corresponds to robot_interfaces__srv__TorqueSet
#[allow(missing_docs, non_camel_case_types)]
pub struct TorqueSet;

impl rosidl_runtime_rs::Service for TorqueSet {
    type Request = TorqueSet_Request;
    type Response = TorqueSet_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_interfaces__srv__TorqueSet() }
    }
}


