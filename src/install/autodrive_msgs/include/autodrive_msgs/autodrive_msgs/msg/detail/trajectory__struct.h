// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

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
// Member 'points'
#include "autodrive_msgs/msg/detail/traj_point__struct.h"

/// Struct defined in msg/Trajectory in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__Trajectory
{
  std_msgs__msg__Header header;
  autodrive_msgs__msg__TrajPoint__Sequence points;
} autodrive_msgs__msg__Trajectory;

// Struct for a sequence of autodrive_msgs__msg__Trajectory.
typedef struct autodrive_msgs__msg__Trajectory__Sequence
{
  autodrive_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
