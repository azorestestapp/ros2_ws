// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/LLLC.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__LLLC__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__LLLC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LLLC in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__LLLC
{
  double torque;
  double decel;
} autodrive_msgs__msg__LLLC;

// Struct for a sequence of autodrive_msgs__msg__LLLC.
typedef struct autodrive_msgs__msg__LLLC__Sequence
{
  autodrive_msgs__msg__LLLC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__LLLC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__LLLC__STRUCT_H_
