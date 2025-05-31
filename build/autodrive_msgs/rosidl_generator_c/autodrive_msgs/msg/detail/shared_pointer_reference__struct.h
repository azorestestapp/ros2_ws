// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/SharedPointerReference.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__SHARED_POINTER_REFERENCE__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__SHARED_POINTER_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'shared_pointer_key'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SharedPointerReference in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__SharedPointerReference
{
  rosidl_runtime_c__String shared_pointer_key;
  bool map_active;
  bool graph_active;
} autodrive_msgs__msg__SharedPointerReference;

// Struct for a sequence of autodrive_msgs__msg__SharedPointerReference.
typedef struct autodrive_msgs__msg__SharedPointerReference__Sequence
{
  autodrive_msgs__msg__SharedPointerReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__SharedPointerReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__SHARED_POINTER_REFERENCE__STRUCT_H_
