// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AWAITING_LOCATION'.
enum
{
  autodrive_msgs__msg__VehicleState__AWAITING_LOCATION = 0
};

/// Constant 'AWAITING_DESTINATION'.
enum
{
  autodrive_msgs__msg__VehicleState__AWAITING_DESTINATION = 1
};

/// Constant 'AWAITING_CONFIRM'.
enum
{
  autodrive_msgs__msg__VehicleState__AWAITING_CONFIRM = 2
};

/// Constant 'MANUAL'.
enum
{
  autodrive_msgs__msg__VehicleState__MANUAL = 3
};

/// Constant 'NAVIGATING'.
enum
{
  autodrive_msgs__msg__VehicleState__NAVIGATING = 4
};

/// Struct defined in msg/VehicleState in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__VehicleState
{
  int8_t state;
} autodrive_msgs__msg__VehicleState;

// Struct for a sequence of autodrive_msgs__msg__VehicleState.
typedef struct autodrive_msgs__msg__VehicleState__Sequence
{
  autodrive_msgs__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
