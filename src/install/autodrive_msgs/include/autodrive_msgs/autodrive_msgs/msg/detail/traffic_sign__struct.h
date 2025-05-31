// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/TrafficSign.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOP'.
enum
{
  autodrive_msgs__msg__TrafficSign__STOP = 0ul
};

/// Constant 'YIELD'.
enum
{
  autodrive_msgs__msg__TrafficSign__YIELD = 1ul
};

/// Constant 'DO_NOT_ENTER'.
enum
{
  autodrive_msgs__msg__TrafficSign__DO_NOT_ENTER = 2ul
};

/// Constant 'NO_LEFT'.
enum
{
  autodrive_msgs__msg__TrafficSign__NO_LEFT = 3ul
};

/// Constant 'NO_STRAIGHT'.
enum
{
  autodrive_msgs__msg__TrafficSign__NO_STRAIGHT = 4ul
};

/// Constant 'NO_U_TURN'.
enum
{
  autodrive_msgs__msg__TrafficSign__NO_U_TURN = 5ul
};

/// Constant 'NO_RIGHT_ON_RED'.
/**
  * also refers to NO TURN ON RED sign
 */
enum
{
  autodrive_msgs__msg__TrafficSign__NO_RIGHT_ON_RED = 6ul
};

/// Constant 'RAILWAY_CROSSING'.
enum
{
  autodrive_msgs__msg__TrafficSign__RAILWAY_CROSSING = 7ul
};

/// Constant 'ONE_WAY'.
enum
{
  autodrive_msgs__msg__TrafficSign__ONE_WAY = 8ul
};

/// Constant 'ROAD_CLOSED'.
enum
{
  autodrive_msgs__msg__TrafficSign__ROAD_CLOSED = 9ul
};

/// Constant 'NO_RIGHT'.
enum
{
  autodrive_msgs__msg__TrafficSign__NO_RIGHT = 10ul
};

/// Constant 'OTHER'.
enum
{
  autodrive_msgs__msg__TrafficSign__OTHER = 11ul
};

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.h"
// Member 'corresponding_lane'
// Member 'associated_sign'
// Member 'associated_stop_line'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'start_day'
// Member 'end_day'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TrafficSign in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__TrafficSign
{
  autodrive_msgs__msg__GeneralDetection detection;
  rosidl_runtime_c__uint64__Sequence corresponding_lane;
  rosidl_runtime_c__uint64__Sequence associated_sign;
  rosidl_runtime_c__uint64__Sequence associated_stop_line;
  /// sign
  uint32_t sign_type;
  float sign_type_confidence;
  /// do not turn left during times shown
  /// 8pm = 20, military time
  uint32_t start_time;
  uint32_t end_time;
  rosidl_runtime_c__String start_day;
  rosidl_runtime_c__String end_day;
} autodrive_msgs__msg__TrafficSign;

// Struct for a sequence of autodrive_msgs__msg__TrafficSign.
typedef struct autodrive_msgs__msg__TrafficSign__Sequence
{
  autodrive_msgs__msg__TrafficSign * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__TrafficSign__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__STRUCT_H_
