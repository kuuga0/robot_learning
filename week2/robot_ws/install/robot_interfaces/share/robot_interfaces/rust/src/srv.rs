#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to robot_interfaces__srv__TorqueSet_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TorqueSet_Request {
    /// 力矩
    pub torque: f64,

}



impl Default for TorqueSet_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TorqueSet_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TorqueSet_Request {
  type RmwMsg = super::srv::rmw::TorqueSet_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        torque: msg.torque,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      torque: msg.torque,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      torque: msg.torque,
    }
  }
}


// Corresponds to robot_interfaces__srv__TorqueSet_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TorqueSet_Response {
    /// 成功
    pub success: bool,

    /// 消息
    pub msg: std::string::String,

}



impl Default for TorqueSet_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TorqueSet_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TorqueSet_Response {
  type RmwMsg = super::srv::rmw::TorqueSet_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        msg: msg.msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        msg: msg.msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      msg: msg.msg.to_string(),
    }
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


