// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/Stopline.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__STOPLINE__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__STOPLINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.h"

/// Struct defined in msg/Stopline in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__Stopline
{
  autodrive_msgs__msg__GeneralDetection detection;
  float stopline_confidence;
} autodrive_msgs__msg__Stopline;

// Struct for a sequence of autodrive_msgs__msg__Stopline.
typedef struct autodrive_msgs__msg__Stopline__Sequence
{
  autodrive_msgs__msg__Stopline * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__Stopline__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__STOPLINE__STRUCT_H_
