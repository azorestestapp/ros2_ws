// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autodrive_msgs:srv/AttributeDictionary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autodrive_msgs/srv/detail/attribute_dictionary__rosidl_typesupport_introspection_c.h"
#include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autodrive_msgs/srv/detail/attribute_dictionary__functions.h"
#include "autodrive_msgs/srv/detail/attribute_dictionary__struct.h"


// Include directives for member types
// Member `attribute_key`
// Member `attribute_val`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autodrive_msgs__srv__AttributeDictionary_Request__init(message_memory);
}

void autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_fini_function(void * message_memory)
{
  autodrive_msgs__srv__AttributeDictionary_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_message_member_array[2] = {
  {
    "attribute_key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__srv__AttributeDictionary_Request, attribute_key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attribute_val",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__srv__AttributeDictionary_Request, attribute_val),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_message_members = {
  "autodrive_msgs__srv",  // message namespace
  "AttributeDictionary_Request",  // message name
  2,  // number of fields
  sizeof(autodrive_msgs__srv__AttributeDictionary_Request),
  autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_message_member_array,  // message members
  autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_message_type_support_handle = {
  0,
  &autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, AttributeDictionary_Request)() {
  if (!autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_message_type_support_handle.typesupport_identifier) {
    autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autodrive_msgs__srv__AttributeDictionary_Request__rosidl_typesupport_introspection_c__AttributeDictionary_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autodrive_msgs/srv/detail/attribute_dictionary__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autodrive_msgs/srv/detail/attribute_dictionary__functions.h"
// already included above
// #include "autodrive_msgs/srv/detail/attribute_dictionary__struct.h"


// Include directives for member types
// Member `lanelet_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `error_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autodrive_msgs__srv__AttributeDictionary_Response__init(message_memory);
}

void autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_fini_function(void * message_memory)
{
  autodrive_msgs__srv__AttributeDictionary_Response__fini(message_memory);
}

size_t autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__size_function__AttributeDictionary_Response__lanelet_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__get_const_function__AttributeDictionary_Response__lanelet_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__get_function__AttributeDictionary_Response__lanelet_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__fetch_function__AttributeDictionary_Response__lanelet_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__get_const_function__AttributeDictionary_Response__lanelet_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__assign_function__AttributeDictionary_Response__lanelet_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__get_function__AttributeDictionary_Response__lanelet_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__resize_function__AttributeDictionary_Response__lanelet_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_message_member_array[3] = {
  {
    "lanelet_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__srv__AttributeDictionary_Response, lanelet_ids),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__size_function__AttributeDictionary_Response__lanelet_ids,  // size() function pointer
    autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__get_const_function__AttributeDictionary_Response__lanelet_ids,  // get_const(index) function pointer
    autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__get_function__AttributeDictionary_Response__lanelet_ids,  // get(index) function pointer
    autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__fetch_function__AttributeDictionary_Response__lanelet_ids,  // fetch(index, &value) function pointer
    autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__assign_function__AttributeDictionary_Response__lanelet_ids,  // assign(index, value) function pointer
    autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__resize_function__AttributeDictionary_Response__lanelet_ids  // resize(index) function pointer
  },
  {
    "error_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__srv__AttributeDictionary_Response, error_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__srv__AttributeDictionary_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_message_members = {
  "autodrive_msgs__srv",  // message namespace
  "AttributeDictionary_Response",  // message name
  3,  // number of fields
  sizeof(autodrive_msgs__srv__AttributeDictionary_Response),
  autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_message_member_array,  // message members
  autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_message_type_support_handle = {
  0,
  &autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, AttributeDictionary_Response)() {
  if (!autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_message_type_support_handle.typesupport_identifier) {
    autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autodrive_msgs__srv__AttributeDictionary_Response__rosidl_typesupport_introspection_c__AttributeDictionary_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autodrive_msgs/srv/detail/attribute_dictionary__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autodrive_msgs__srv__detail__attribute_dictionary__rosidl_typesupport_introspection_c__AttributeDictionary_service_members = {
  "autodrive_msgs__srv",  // service namespace
  "AttributeDictionary",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autodrive_msgs__srv__detail__attribute_dictionary__rosidl_typesupport_introspection_c__AttributeDictionary_Request_message_type_support_handle,
  NULL  // response message
  // autodrive_msgs__srv__detail__attribute_dictionary__rosidl_typesupport_introspection_c__AttributeDictionary_Response_message_type_support_handle
};

static rosidl_service_type_support_t autodrive_msgs__srv__detail__attribute_dictionary__rosidl_typesupport_introspection_c__AttributeDictionary_service_type_support_handle = {
  0,
  &autodrive_msgs__srv__detail__attribute_dictionary__rosidl_typesupport_introspection_c__AttributeDictionary_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, AttributeDictionary_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, AttributeDictionary_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, AttributeDictionary)() {
  if (!autodrive_msgs__srv__detail__attribute_dictionary__rosidl_typesupport_introspection_c__AttributeDictionary_service_type_support_handle.typesupport_identifier) {
    autodrive_msgs__srv__detail__attribute_dictionary__rosidl_typesupport_introspection_c__AttributeDictionary_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autodrive_msgs__srv__detail__attribute_dictionary__rosidl_typesupport_introspection_c__AttributeDictionary_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, AttributeDictionary_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, AttributeDictionary_Response)()->data;
  }

  return &autodrive_msgs__srv__detail__attribute_dictionary__rosidl_typesupport_introspection_c__AttributeDictionary_service_type_support_handle;
}
