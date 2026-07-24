// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mj_interfaces:srv/TorqueSrv.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mj_interfaces/srv/detail/torque_srv__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mj_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TorqueSrv_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TorqueSrv_Request_type_support_ids_t;

static const _TorqueSrv_Request_type_support_ids_t _TorqueSrv_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TorqueSrv_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TorqueSrv_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TorqueSrv_Request_type_support_symbol_names_t _TorqueSrv_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mj_interfaces, srv, TorqueSrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mj_interfaces, srv, TorqueSrv_Request)),
  }
};

typedef struct _TorqueSrv_Request_type_support_data_t
{
  void * data[2];
} _TorqueSrv_Request_type_support_data_t;

static _TorqueSrv_Request_type_support_data_t _TorqueSrv_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TorqueSrv_Request_message_typesupport_map = {
  2,
  "mj_interfaces",
  &_TorqueSrv_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TorqueSrv_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TorqueSrv_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TorqueSrv_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TorqueSrv_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mj_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mj_interfaces::srv::TorqueSrv_Request>()
{
  return &::mj_interfaces::srv::rosidl_typesupport_cpp::TorqueSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mj_interfaces, srv, TorqueSrv_Request)() {
  return get_message_type_support_handle<mj_interfaces::srv::TorqueSrv_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mj_interfaces/srv/detail/torque_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mj_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TorqueSrv_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TorqueSrv_Response_type_support_ids_t;

static const _TorqueSrv_Response_type_support_ids_t _TorqueSrv_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TorqueSrv_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TorqueSrv_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TorqueSrv_Response_type_support_symbol_names_t _TorqueSrv_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mj_interfaces, srv, TorqueSrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mj_interfaces, srv, TorqueSrv_Response)),
  }
};

typedef struct _TorqueSrv_Response_type_support_data_t
{
  void * data[2];
} _TorqueSrv_Response_type_support_data_t;

static _TorqueSrv_Response_type_support_data_t _TorqueSrv_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TorqueSrv_Response_message_typesupport_map = {
  2,
  "mj_interfaces",
  &_TorqueSrv_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TorqueSrv_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TorqueSrv_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TorqueSrv_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TorqueSrv_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mj_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mj_interfaces::srv::TorqueSrv_Response>()
{
  return &::mj_interfaces::srv::rosidl_typesupport_cpp::TorqueSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mj_interfaces, srv, TorqueSrv_Response)() {
  return get_message_type_support_handle<mj_interfaces::srv::TorqueSrv_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mj_interfaces/srv/detail/torque_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mj_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TorqueSrv_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TorqueSrv_type_support_ids_t;

static const _TorqueSrv_type_support_ids_t _TorqueSrv_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TorqueSrv_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TorqueSrv_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TorqueSrv_type_support_symbol_names_t _TorqueSrv_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mj_interfaces, srv, TorqueSrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mj_interfaces, srv, TorqueSrv)),
  }
};

typedef struct _TorqueSrv_type_support_data_t
{
  void * data[2];
} _TorqueSrv_type_support_data_t;

static _TorqueSrv_type_support_data_t _TorqueSrv_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TorqueSrv_service_typesupport_map = {
  2,
  "mj_interfaces",
  &_TorqueSrv_service_typesupport_ids.typesupport_identifier[0],
  &_TorqueSrv_service_typesupport_symbol_names.symbol_name[0],
  &_TorqueSrv_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TorqueSrv_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TorqueSrv_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mj_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mj_interfaces::srv::TorqueSrv>()
{
  return &::mj_interfaces::srv::rosidl_typesupport_cpp::TorqueSrv_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mj_interfaces, srv, TorqueSrv)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mj_interfaces::srv::TorqueSrv>();
}

#ifdef __cplusplus
}
#endif
