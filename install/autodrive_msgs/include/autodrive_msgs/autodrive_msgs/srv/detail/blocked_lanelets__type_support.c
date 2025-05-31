// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autodrive_msgs:srv/BlockedLanelets.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autodrive_msgs/srv/detail/blocked_lanelets__rosidl_typesupport_introspection_c.h"
#include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autodrive_msgs/srv/detail/blocked_lanelets__functions.h"
#include "autodrive_msgs/srv/detail/blocked_lanelets__struct.h"


// Include directives for member types
// Member `blocked`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autodrive_msgs__srv__BlockedLanelets_Request__init(message_memory);
}

void autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_fini_function(void * message_memory)
{
  autodrive_msgs__srv__BlockedLanelets_Request__fini(message_memory);
}

size_t autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__size_function__BlockedLanelets_Request__blocked(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__get_const_function__BlockedLanelets_Request__blocked(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__get_function__BlockedLanelets_Request__blocked(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__fetch_function__BlockedLanelets_Request__blocked(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__get_const_function__BlockedLanelets_Request__blocked(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__assign_function__BlockedLanelets_Request__blocked(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__get_function__BlockedLanelets_Request__blocked(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__resize_function__BlockedLanelets_Request__blocked(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_message_member_array[1] = {
  {
    "blocked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__srv__BlockedLanelets_Request, blocked),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__size_function__BlockedLanelets_Request__blocked,  // size() function pointer
    autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__get_const_function__BlockedLanelets_Request__blocked,  // get_const(index) function pointer
    autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__get_function__BlockedLanelets_Request__blocked,  // get(index) function pointer
    autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__fetch_function__BlockedLanelets_Request__blocked,  // fetch(index, &value) function pointer
    autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__assign_function__BlockedLanelets_Request__blocked,  // assign(index, value) function pointer
    autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__resize_function__BlockedLanelets_Request__blocked  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_message_members = {
  "autodrive_msgs__srv",  // message namespace
  "BlockedLanelets_Request",  // message name
  1,  // number of fields
  sizeof(autodrive_msgs__srv__BlockedLanelets_Request),
  autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_message_member_array,  // message members
  autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_message_type_support_handle = {
  0,
  &autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, BlockedLanelets_Request)() {
  if (!autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_message_type_support_handle.typesupport_identifier) {
    autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autodrive_msgs__srv__BlockedLanelets_Request__rosidl_typesupport_introspection_c__BlockedLanelets_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autodrive_msgs/srv/detail/blocked_lanelets__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autodrive_msgs/srv/detail/blocked_lanelets__functions.h"
// already included above
// #include "autodrive_msgs/srv/detail/blocked_lanelets__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autodrive_msgs__srv__BlockedLanelets_Response__init(message_memory);
}

void autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_fini_function(void * message_memory)
{
  autodrive_msgs__srv__BlockedLanelets_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_message_member_array[1] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__srv__BlockedLanelets_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_message_members = {
  "autodrive_msgs__srv",  // message namespace
  "BlockedLanelets_Response",  // message name
  1,  // number of fields
  sizeof(autodrive_msgs__srv__BlockedLanelets_Response),
  autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_message_member_array,  // message members
  autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_message_type_support_handle = {
  0,
  &autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, BlockedLanelets_Response)() {
  if (!autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_message_type_support_handle.typesupport_identifier) {
    autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autodrive_msgs__srv__BlockedLanelets_Response__rosidl_typesupport_introspection_c__BlockedLanelets_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autodrive_msgs/srv/detail/blocked_lanelets__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autodrive_msgs__srv__detail__blocked_lanelets__rosidl_typesupport_introspection_c__BlockedLanelets_service_members = {
  "autodrive_msgs__srv",  // service namespace
  "BlockedLanelets",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autodrive_msgs__srv__detail__blocked_lanelets__rosidl_typesupport_introspection_c__BlockedLanelets_Request_message_type_support_handle,
  NULL  // response message
  // autodrive_msgs__srv__detail__blocked_lanelets__rosidl_typesupport_introspection_c__BlockedLanelets_Response_message_type_support_handle
};

static rosidl_service_type_support_t autodrive_msgs__srv__detail__blocked_lanelets__rosidl_typesupport_introspection_c__BlockedLanelets_service_type_support_handle = {
  0,
  &autodrive_msgs__srv__detail__blocked_lanelets__rosidl_typesupport_introspection_c__BlockedLanelets_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, BlockedLanelets_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, BlockedLanelets_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, BlockedLanelets)() {
  if (!autodrive_msgs__srv__detail__blocked_lanelets__rosidl_typesupport_introspection_c__BlockedLanelets_service_type_support_handle.typesupport_identifier) {
    autodrive_msgs__srv__detail__blocked_lanelets__rosidl_typesupport_introspection_c__BlockedLanelets_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autodrive_msgs__srv__detail__blocked_lanelets__rosidl_typesupport_introspection_c__BlockedLanelets_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, BlockedLanelets_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, srv, BlockedLanelets_Response)()->data;
  }

  return &autodrive_msgs__srv__detail__blocked_lanelets__rosidl_typesupport_introspection_c__BlockedLanelets_service_type_support_handle;
}
