// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mj_interfaces:msg/IpInterface.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__STRUCT_H_
#define MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__STRUCT_H_

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
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'omega'
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/IpInterface in the package mj_interfaces.
typedef struct mj_interfaces__msg__IpInterface
{
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
  /// 角度
  double theta;
  /// 角速度
  geometry_msgs__msg__Vector3 omega;
  /// 力矩
  geometry_msgs__msg__Vector3 torque;
  /// 末端位置
  geometry_msgs__msg__Point position;
} mj_interfaces__msg__IpInterface;

// Struct for a sequence of mj_interfaces__msg__IpInterface.
typedef struct mj_interfaces__msg__IpInterface__Sequence
{
  mj_interfaces__msg__IpInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mj_interfaces__msg__IpInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__STRUCT_H_
