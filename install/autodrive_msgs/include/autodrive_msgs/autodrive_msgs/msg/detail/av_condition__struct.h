// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/AVCondition.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__AV_CONDITION__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__AV_CONDITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'condition'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AVCondition in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__AVCondition
{
  rosidl_runtime_c__String condition;
  bool passed;
} autodrive_msgs__msg__AVCondition;

// Struct for a sequence of autodrive_msgs__msg__AVCondition.
typedef struct autodrive_msgs__msg__AVCondition__Sequence
{
  autodrive_msgs__msg__AVCondition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__AVCondition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__AV_CONDITION__STRUCT_H_
