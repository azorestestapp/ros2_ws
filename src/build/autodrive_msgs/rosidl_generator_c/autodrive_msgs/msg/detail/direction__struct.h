// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DIRECTION__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEFAULT'.
enum
{
  autodrive_msgs__msg__Direction__DEFAULT = 0
};

/// Constant 'STRAIGHT'.
enum
{
  autodrive_msgs__msg__Direction__STRAIGHT = 1
};

/// Constant 'LEFT_TURN'.
enum
{
  autodrive_msgs__msg__Direction__LEFT_TURN = 2
};

/// Constant 'RIGHT_TURN'.
enum
{
  autodrive_msgs__msg__Direction__RIGHT_TURN = 3
};

/// Constant 'LEFT_LANE_CHANGE'.
enum
{
  autodrive_msgs__msg__Direction__LEFT_LANE_CHANGE = 4
};

/// Constant 'RIGHT_LANE_CHANGE'.
enum
{
  autodrive_msgs__msg__Direction__RIGHT_LANE_CHANGE = 5
};

/// Struct defined in msg/Direction in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__Direction
{
  int8_t type;
} autodrive_msgs__msg__Direction;

// Struct for a sequence of autodrive_msgs__msg__Direction.
typedef struct autodrive_msgs__msg__Direction__Sequence
{
  autodrive_msgs__msg__Direction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__Direction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DIRECTION__STRUCT_H_
