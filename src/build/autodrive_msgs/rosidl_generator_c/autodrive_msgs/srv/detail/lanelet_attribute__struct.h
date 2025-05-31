// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:srv/LaneletAttribute.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__LANELET_ATTRIBUTE__STRUCT_H_
#define AUTODRIVE_MSGS__SRV__DETAIL__LANELET_ATTRIBUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'attribute_key'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LaneletAttribute in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__LaneletAttribute_Request
{
  uint64_t lanelet_id;
  rosidl_runtime_c__String attribute_key;
} autodrive_msgs__srv__LaneletAttribute_Request;

// Struct for a sequence of autodrive_msgs__srv__LaneletAttribute_Request.
typedef struct autodrive_msgs__srv__LaneletAttribute_Request__Sequence
{
  autodrive_msgs__srv__LaneletAttribute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__LaneletAttribute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'attribute_val'
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LaneletAttribute in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__LaneletAttribute_Response
{
  rosidl_runtime_c__String attribute_val;
  bool error;
  rosidl_runtime_c__String error_msg;
} autodrive_msgs__srv__LaneletAttribute_Response;

// Struct for a sequence of autodrive_msgs__srv__LaneletAttribute_Response.
typedef struct autodrive_msgs__srv__LaneletAttribute_Response__Sequence
{
  autodrive_msgs__srv__LaneletAttribute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__LaneletAttribute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__LANELET_ATTRIBUTE__STRUCT_H_
