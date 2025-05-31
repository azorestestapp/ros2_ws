// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from autodrive_msgs:msg/MPCControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autodrive_msgs/msg/detail/mpc_control__struct.h"
#include "autodrive_msgs/msg/detail/mpc_control__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace autodrive_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _MPCControl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MPCControl_type_support_ids_t;

static const _MPCControl_type_support_ids_t _MPCControl_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MPCControl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MPCControl_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MPCControl_type_support_symbol_names_t _MPCControl_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, msg, MPCControl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, MPCControl)),
  }
};

typedef struct _MPCControl_type_support_data_t
{
  void * data[2];
} _MPCControl_type_support_data_t;

static _MPCControl_type_support_data_t _MPCControl_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MPCControl_message_typesupport_map = {
  2,
  "autodrive_msgs",
  &_MPCControl_message_typesupport_ids.typesupport_identifier[0],
  &_MPCControl_message_typesupport_symbol_names.symbol_name[0],
  &_MPCControl_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MPCControl_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MPCControl_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace autodrive_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autodrive_msgs, msg, MPCControl)() {
  return &::autodrive_msgs::msg::rosidl_typesupport_c::MPCControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
