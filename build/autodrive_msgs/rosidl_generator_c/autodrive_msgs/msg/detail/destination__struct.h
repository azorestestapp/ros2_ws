// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/Destination.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Destination in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__Destination
{
  double east;
  double north;
  bool parking;
  bool multiroute;
} autodrive_msgs__msg__Destination;

// Struct for a sequence of autodrive_msgs__msg__Destination.
typedef struct autodrive_msgs__msg__Destination__Sequence
{
  autodrive_msgs__msg__Destination * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__Destination__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__STRUCT_H_
