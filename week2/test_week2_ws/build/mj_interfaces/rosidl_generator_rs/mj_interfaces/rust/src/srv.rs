#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to mj_interfaces__srv__TorqueSrv_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TorqueSrv_Request {
    /// 具体的值
    pub torque: geometry_msgs::msg::Vector3,

}



impl Default for TorqueSrv_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TorqueSrv_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TorqueSrv_Request {
  type RmwMsg = super::srv::rmw::TorqueSrv_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        torque: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.torque)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        torque: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.torque)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      torque: geometry_msgs::msg::Vector3::from_rmw_message(msg.torque),
    }
  }
}


// Corresponds to mj_interfaces__srv__TorqueSrv_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TorqueSrv_Response {
    /// 是否成功
    pub success: bool,

    /// 消息
    pub message: std::string::String,

}



impl Default for TorqueSrv_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TorqueSrv_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TorqueSrv_Response {
  type RmwMsg = super::srv::rmw::TorqueSrv_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


