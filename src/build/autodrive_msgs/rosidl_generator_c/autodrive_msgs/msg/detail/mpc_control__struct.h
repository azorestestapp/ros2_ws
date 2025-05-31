// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/MPCControl.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/MPCControl in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__MPCControl
{
  std_msgs__msg__Header header;
  double duration;
  double steering_angle_1;
  double steering_angle_2;
  double steering_angle_3;
  double accel_1;
  double accel_2;
  double accel_3;
} autodrive_msgs__msg__MPCControl;

// Struct for a sequence of autodrive_msgs__msg__MPCControl.
typedef struct autodrive_msgs__msg__MPCControl__Sequence
{
  autodrive_msgs__msg__MPCControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__MPCControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__STRUCT_H_
