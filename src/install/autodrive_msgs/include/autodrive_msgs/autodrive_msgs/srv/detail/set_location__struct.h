// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:srv/SetLocation.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__SET_LOCATION__STRUCT_H_
#define AUTODRIVE_MSGS__SRV__DETAIL__SET_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'location'
#include "autodrive_msgs/msg/detail/location__struct.h"

/// Struct defined in srv/SetLocation in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__SetLocation_Request
{
  autodrive_msgs__msg__Location location;
} autodrive_msgs__srv__SetLocation_Request;

// Struct for a sequence of autodrive_msgs__srv__SetLocation_Request.
typedef struct autodrive_msgs__srv__SetLocation_Request__Sequence
{
  autodrive_msgs__srv__SetLocation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__SetLocation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'confirm'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLocation in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__SetLocation_Response
{
  rosidl_runtime_c__String confirm;
  bool error;
} autodrive_msgs__srv__SetLocation_Response;

// Struct for a sequence of autodrive_msgs__srv__SetLocation_Response.
typedef struct autodrive_msgs__srv__SetLocation_Response__Sequence
{
  autodrive_msgs__srv__SetLocation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__SetLocation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__SET_LOCATION__STRUCT_H_
