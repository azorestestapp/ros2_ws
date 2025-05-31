// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:srv/BlockedLanelets.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__BLOCKED_LANELETS__STRUCT_H_
#define AUTODRIVE_MSGS__SRV__DETAIL__BLOCKED_LANELETS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'blocked'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/BlockedLanelets in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__BlockedLanelets_Request
{
  rosidl_runtime_c__uint64__Sequence blocked;
} autodrive_msgs__srv__BlockedLanelets_Request;

// Struct for a sequence of autodrive_msgs__srv__BlockedLanelets_Request.
typedef struct autodrive_msgs__srv__BlockedLanelets_Request__Sequence
{
  autodrive_msgs__srv__BlockedLanelets_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__BlockedLanelets_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BlockedLanelets in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__BlockedLanelets_Response
{
  bool error;
} autodrive_msgs__srv__BlockedLanelets_Response;

// Struct for a sequence of autodrive_msgs__srv__BlockedLanelets_Response.
typedef struct autodrive_msgs__srv__BlockedLanelets_Response__Sequence
{
  autodrive_msgs__srv__BlockedLanelets_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__BlockedLanelets_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__BLOCKED_LANELETS__STRUCT_H_
