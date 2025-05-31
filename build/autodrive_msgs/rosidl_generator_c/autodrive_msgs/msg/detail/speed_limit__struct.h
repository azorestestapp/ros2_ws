// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MPS'.
/**
  * mph / kph
  * meters per second
 */
enum
{
  autodrive_msgs__msg__SpeedLimit__MPS = 0ul
};

/// Constant 'KPH'.
enum
{
  autodrive_msgs__msg__SpeedLimit__KPH = 1ul
};

/// Constant 'MPH'.
enum
{
  autodrive_msgs__msg__SpeedLimit__MPH = 2ul
};

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.h"

/// Struct defined in msg/SpeedLimit in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__SpeedLimit
{
  autodrive_msgs__msg__GeneralDetection detection;
  uint32_t max_speed;
  uint32_t min_speed;
  float speed_limit_confidence;
  uint32_t unit;
  float speed_limit_unit_confidence;
} autodrive_msgs__msg__SpeedLimit;

// Struct for a sequence of autodrive_msgs__msg__SpeedLimit.
typedef struct autodrive_msgs__msg__SpeedLimit__Sequence
{
  autodrive_msgs__msg__SpeedLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__SpeedLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_H_
