// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/RailroadCrossing.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__RAILROAD_CROSSING__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__RAILROAD_CROSSING__STRUCT_H_

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

/// Struct defined in msg/RailroadCrossing in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__RailroadCrossing
{
  autodrive_msgs__msg__GeneralDetection detection;
  /// bar
  uint64_t bar;
  /// active means stop! Bar down and lights flashing
  bool active;
  float bar_activity_confidence;
  /// railroad_sign
  uint64_t railroad_sign;
  /// stop line
  uint64_t stop_line;
} autodrive_msgs__msg__RailroadCrossing;

// Struct for a sequence of autodrive_msgs__msg__RailroadCrossing.
typedef struct autodrive_msgs__msg__RailroadCrossing__Sequence
{
  autodrive_msgs__msg__RailroadCrossing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__RailroadCrossing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__RAILROAD_CROSSING__STRUCT_H_
