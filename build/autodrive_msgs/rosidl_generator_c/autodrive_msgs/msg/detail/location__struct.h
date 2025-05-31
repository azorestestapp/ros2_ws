// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INVALID'.
enum
{
  autodrive_msgs__msg__Location__INVALID = -2
};

/// Constant 'UNKNOWN'.
enum
{
  autodrive_msgs__msg__Location__UNKNOWN = -1
};

/// Constant 'KCITY'.
enum
{
  autodrive_msgs__msg__Location__KCITY = 0
};

/// Constant 'MCITY'.
enum
{
  autodrive_msgs__msg__Location__MCITY = 1
};

/// Constant 'TOWN10'.
enum
{
  autodrive_msgs__msg__Location__TOWN10 = 2
};

/// Constant 'TOWN13'.
enum
{
  autodrive_msgs__msg__Location__TOWN13 = 3
};

/// Constant 'TOWN04'.
enum
{
  autodrive_msgs__msg__Location__TOWN04 = 4
};

/// Struct defined in msg/Location in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__Location
{
  int8_t location;
  /// Reference points for ENU conversion
  double latitude;
  double longitude;
  double height;
} autodrive_msgs__msg__Location;

// Struct for a sequence of autodrive_msgs__msg__Location.
typedef struct autodrive_msgs__msg__Location__Sequence
{
  autodrive_msgs__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_
