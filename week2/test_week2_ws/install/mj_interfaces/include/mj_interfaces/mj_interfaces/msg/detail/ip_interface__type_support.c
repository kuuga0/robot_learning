// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mj_interfaces:msg/IpInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mj_interfaces/msg/detail/ip_interface__rosidl_typesupport_introspection_c.h"
#include "mj_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mj_interfaces/msg/detail/ip_interface__functions.h"
#include "mj_interfaces/msg/detail/ip_interface__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `omega`
// Member `torque`
#include "geometry_msgs/msg/vector3.h"
// Member `omega`
// Member `torque`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mj_interfaces__msg__IpInterface__init(message_memory);
}

void mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_fini_function(void * message_memory)
{
  mj_interfaces__msg__IpInterface__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mj_interfaces__msg__IpInterface, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mj_interfaces__msg__IpInterface, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "omega",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mj_interfaces__msg__IpInterface, omega),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mj_interfaces__msg__IpInterface, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mj_interfaces__msg__IpInterface, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_members = {
  "mj_interfaces__msg",  // message namespace
  "IpInterface",  // message name
  5,  // number of fields
  sizeof(mj_interfaces__msg__IpInterface),
  mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_member_array,  // message members
  mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_type_support_handle = {
  0,
  &mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mj_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mj_interfaces, msg, IpInterface)() {
  mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_type_support_handle.typesupport_identifier) {
    mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mj_interfaces__msg__IpInterface__rosidl_typesupport_introspection_c__IpInterface_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
