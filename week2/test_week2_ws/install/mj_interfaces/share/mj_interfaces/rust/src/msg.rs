#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to mj_interfaces__msg__IpInterface

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IpInterface {
    /// 时间戳
    pub stamp: builtin_interfaces::msg::Time,

    /// 角度
    pub theta: f64,

    /// 角速度
    pub omega: geometry_msgs::msg::Vector3,

    /// 力矩
    pub torque: geometry_msgs::msg::Vector3,

    /// 末端位置
    pub position: geometry_msgs::msg::Point,

}



impl Default for IpInterface {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IpInterface::default())
  }
}

impl rosidl_runtime_rs::Message for IpInterface {
  type RmwMsg = super::msg::rmw::IpInterface;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        theta: msg.theta,
        omega: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.omega)).into_owned(),
        torque: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.torque)).into_owned(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      theta: msg.theta,
        omega: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.omega)).into_owned(),
        torque: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.torque)).into_owned(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      theta: msg.theta,
      omega: geometry_msgs::msg::Vector3::from_rmw_message(msg.omega),
      torque: geometry_msgs::msg::Vector3::from_rmw_message(msg.torque),
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
    }
  }
}


