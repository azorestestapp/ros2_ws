// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from autodrive_msgs:srv/GetId.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autodrive_msgs/srv/detail/get_id__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace autodrive_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetId_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetId_Request_type_support_ids_t;

static const _GetId_Request_type_support_ids_t _GetId_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetId_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetId_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetId_Request_type_support_symbol_names_t _GetId_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autodrive_msgs, srv, GetId_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autodrive_msgs, srv, GetId_Request)),
  }
};

typedef struct _GetId_Request_type_support_data_t
{
  void * data[2];
} _GetId_Request_type_support_data_t;

static _GetId_Request_type_support_data_t _GetId_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetId_Request_message_typesupport_map = {
  2,
  "autodrive_msgs",
  &_GetId_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetId_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetId_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetId_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetId_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autodrive_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autodrive_msgs::srv::GetId_Request>()
{
  return &::autodrive_msgs::srv::rosidl_typesupport_cpp::GetId_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autodrive_msgs, srv, GetId_Request)() {
  return get_message_type_support_handle<autodrive_msgs::srv::GetId_Request>();
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
// #include "autodrive_msgs/srv/detail/get_id__struct.hpp"
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

namespace autodrive_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetId_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetId_Response_type_support_ids_t;

static const _GetId_Response_type_support_ids_t _GetId_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetId_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetId_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetId_Response_type_support_symbol_names_t _GetId_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autodrive_msgs, srv, GetId_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autodrive_msgs, srv, GetId_Response)),
  }
};

typedef struct _GetId_Response_type_support_data_t
{
  void * data[2];
} _GetId_Response_type_support_data_t;

static _GetId_Response_type_support_data_t _GetId_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetId_Response_message_typesupport_map = {
  2,
  "autodrive_msgs",
  &_GetId_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetId_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetId_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetId_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetId_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autodrive_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autodrive_msgs::srv::GetId_Response>()
{
  return &::autodrive_msgs::srv::rosidl_typesupport_cpp::GetId_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autodrive_msgs, srv, GetId_Response)() {
  return get_message_type_support_handle<autodrive_msgs::srv::GetId_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autodrive_msgs/srv/detail/get_id__struct.hpp"
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

namespace autodrive_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetId_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetId_type_support_ids_t;

static const _GetId_type_support_ids_t _GetId_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetId_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetId_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetId_type_support_symbol_names_t _GetId_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autodrive_msgs, srv, GetId)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autodrive_msgs, srv, GetId)),
  }
};

typedef struct _GetId_type_support_data_t
{
  void * data[2];
} _GetId_type_support_data_t;

static _GetId_type_support_data_t _GetId_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetId_service_typesupport_map = {
  2,
  "autodrive_msgs",
  &_GetId_service_typesupport_ids.typesupport_identifier[0],
  &_GetId_service_typesupport_symbol_names.symbol_name[0],
  &_GetId_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetId_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetId_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autodrive_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<autodrive_msgs::srv::GetId>()
{
  return &::autodrive_msgs::srv::rosidl_typesupport_cpp::GetId_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, autodrive_msgs, srv, GetId)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<autodrive_msgs::srv::GetId>();
}

#ifdef __cplusplus
}
#endif
