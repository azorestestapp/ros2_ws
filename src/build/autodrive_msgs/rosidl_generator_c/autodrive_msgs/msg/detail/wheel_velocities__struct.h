// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WheelVelocities in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__WheelVelocities
{
  double front_left_velocity;
  double front_right_velocity;
  double rear_left_velocity;
  double rear_right_velocity;
  double steering_angle;
} autodrive_msgs__msg__WheelVelocities;

// Struct for a sequence of autodrive_msgs__msg__WheelVelocities.
typedef struct autodrive_msgs__msg__WheelVelocities__Sequence
{
  autodrive_msgs__msg__WheelVelocities * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__WheelVelocities__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_H_
