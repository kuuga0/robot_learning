// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'control'
#include "std_msgs/msg/detail/float64__struct.h"
// Member 'stable'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in msg/RobotStatus in the package robot_interfaces.
/**
  * 单摆状态消息
 */
typedef struct robot_interfaces__msg__RobotStatus
{
  /// 时间戳
  std_msgs__msg__Header stamp;
  /// x: 小车位置[m], y: 摆角[rad], z: 0
  geometry_msgs__msg__Point pose;
  /// linear.x: 小车速度[m/s], angular.z: 摆角速度[rad/s]
  geometry_msgs__msg__Twist twist;
  /// 当前控制量，调试用
  std_msgs__msg__Float64 control;
  /// true=已稳定倒立
  std_msgs__msg__Bool stable;
} robot_interfaces__msg__RobotStatus;

// Struct for a sequence of robot_interfaces__msg__RobotStatus.
typedef struct robot_interfaces__msg__RobotStatus__Sequence
{
  robot_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
