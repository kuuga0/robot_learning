#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robot_interfaces__msg__RobotStatus
/// 单摆状态消息

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {
    /// 时间戳
    pub time: std_msgs::msg::Header,

    /// x: 小车位置[m], y: 摆角[rad], z: 0
    pub pose: geometry_msgs::msg::Point,

    /// linear.x: 小车速度[m/s], angular.z: 摆角速度[rad/s]
    pub twist: geometry_msgs::msg::Twist,

    /// 当前控制量，调试用
    pub control: std_msgs::msg::Float64,

    /// true=已稳定倒立
    pub stable: std_msgs::msg::Bool,

}



impl Default for RobotStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = super::msg::rmw::RobotStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.time)).into_owned(),
        pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
        control: std_msgs::msg::Float64::into_rmw_message(std::borrow::Cow::Owned(msg.control)).into_owned(),
        stable: std_msgs::msg::Bool::into_rmw_message(std::borrow::Cow::Owned(msg.stable)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time)).into_owned(),
        pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
        control: std_msgs::msg::Float64::into_rmw_message(std::borrow::Cow::Borrowed(&msg.control)).into_owned(),
        stable: std_msgs::msg::Bool::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stable)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time: std_msgs::msg::Header::from_rmw_message(msg.time),
      pose: geometry_msgs::msg::Point::from_rmw_message(msg.pose),
      twist: geometry_msgs::msg::Twist::from_rmw_message(msg.twist),
      control: std_msgs::msg::Float64::from_rmw_message(msg.control),
      stable: std_msgs::msg::Bool::from_rmw_message(msg.stable),
    }
  }
}


