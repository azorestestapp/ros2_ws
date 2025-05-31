// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:srv/AttributeDictionary.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__STRUCT_H_
#define AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__STRUCT_H_

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
// Member 'attribute_val'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AttributeDictionary in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__AttributeDictionary_Request
{
  rosidl_runtime_c__String attribute_key;
  rosidl_runtime_c__String attribute_val;
} autodrive_msgs__srv__AttributeDictionary_Request;

// Struct for a sequence of autodrive_msgs__srv__AttributeDictionary_Request.
typedef struct autodrive_msgs__srv__AttributeDictionary_Request__Sequence
{
  autodrive_msgs__srv__AttributeDictionary_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__AttributeDictionary_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'lanelet_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AttributeDictionary in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__AttributeDictionary_Response
{
  rosidl_runtime_c__uint64__Sequence lanelet_ids;
  rosidl_runtime_c__String error_msg;
  bool error;
} autodrive_msgs__srv__AttributeDictionary_Response;

// Struct for a sequence of autodrive_msgs__srv__AttributeDictionary_Response.
typedef struct autodrive_msgs__srv__AttributeDictionary_Response__Sequence
{
  autodrive_msgs__srv__AttributeDictionary_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__AttributeDictionary_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__STRUCT_H_
