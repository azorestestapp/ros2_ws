// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:srv/GetId.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__STRUCT_H_
#define AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'east'
// Member 'north'
// Member 'radius'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetId in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__GetId_Request
{
  rosidl_runtime_c__double__Sequence east;
  rosidl_runtime_c__double__Sequence north;
  rosidl_runtime_c__double__Sequence radius;
} autodrive_msgs__srv__GetId_Request;

// Struct for a sequence of autodrive_msgs__srv__GetId_Request.
typedef struct autodrive_msgs__srv__GetId_Request__Sequence
{
  autodrive_msgs__srv__GetId_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__GetId_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'lanelet_id'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetId in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__GetId_Response
{
  bool error;
  rosidl_runtime_c__uint64__Sequence lanelet_id;
} autodrive_msgs__srv__GetId_Response;

// Struct for a sequence of autodrive_msgs__srv__GetId_Response.
typedef struct autodrive_msgs__srv__GetId_Response__Sequence
{
  autodrive_msgs__srv__GetId_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__GetId_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__STRUCT_H_
