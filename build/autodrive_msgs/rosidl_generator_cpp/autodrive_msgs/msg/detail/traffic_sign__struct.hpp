// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/TrafficSign.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__TrafficSign __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__TrafficSign __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficSign_
{
  using Type = TrafficSign_<ContainerAllocator>;

  explicit TrafficSign_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sign_type = 0ul;
      this->sign_type_confidence = 0.0f;
      this->start_time = 0ul;
      this->end_time = 0ul;
      this->start_day = "";
      this->end_day = "";
    }
  }

  explicit TrafficSign_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_alloc, _init),
    start_day(_alloc),
    end_day(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sign_type = 0ul;
      this->sign_type_confidence = 0.0f;
      this->start_time = 0ul;
      this->end_time = 0ul;
      this->start_day = "";
      this->end_day = "";
    }
  }

  // field types and members
  using _detection_type =
    autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>;
  _detection_type detection;
  using _corresponding_lane_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _corresponding_lane_type corresponding_lane;
  using _associated_sign_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _associated_sign_type associated_sign;
  using _associated_stop_line_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _associated_stop_line_type associated_stop_line;
  using _sign_type_type =
    uint32_t;
  _sign_type_type sign_type;
  using _sign_type_confidence_type =
    float;
  _sign_type_confidence_type sign_type_confidence;
  using _start_time_type =
    uint32_t;
  _start_time_type start_time;
  using _end_time_type =
    uint32_t;
  _end_time_type end_time;
  using _start_day_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_day_type start_day;
  using _end_day_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _end_day_type end_day;

  // setters for named parameter idiom
  Type & set__detection(
    const autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> & _arg)
  {
    this->detection = _arg;
    return *this;
  }
  Type & set__corresponding_lane(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->corresponding_lane = _arg;
    return *this;
  }
  Type & set__associated_sign(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->associated_sign = _arg;
    return *this;
  }
  Type & set__associated_stop_line(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->associated_stop_line = _arg;
    return *this;
  }
  Type & set__sign_type(
    const uint32_t & _arg)
  {
    this->sign_type = _arg;
    return *this;
  }
  Type & set__sign_type_confidence(
    const float & _arg)
  {
    this->sign_type_confidence = _arg;
    return *this;
  }
  Type & set__start_time(
    const uint32_t & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__end_time(
    const uint32_t & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__start_day(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_day = _arg;
    return *this;
  }
  Type & set__end_day(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->end_day = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t STOP =
    0u;
  static constexpr uint32_t YIELD =
    1u;
  static constexpr uint32_t DO_NOT_ENTER =
    2u;
  static constexpr uint32_t NO_LEFT =
    3u;
  static constexpr uint32_t NO_STRAIGHT =
    4u;
  static constexpr uint32_t NO_U_TURN =
    5u;
  static constexpr uint32_t NO_RIGHT_ON_RED =
    6u;
  static constexpr uint32_t RAILWAY_CROSSING =
    7u;
  static constexpr uint32_t ONE_WAY =
    8u;
  static constexpr uint32_t ROAD_CLOSED =
    9u;
  static constexpr uint32_t NO_RIGHT =
    10u;
  static constexpr uint32_t OTHER =
    11u;

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::TrafficSign_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::TrafficSign_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::TrafficSign_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::TrafficSign_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::TrafficSign_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::TrafficSign_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::TrafficSign_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::TrafficSign_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::TrafficSign_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::TrafficSign_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__TrafficSign
    std::shared_ptr<autodrive_msgs::msg::TrafficSign_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__TrafficSign
    std::shared_ptr<autodrive_msgs::msg::TrafficSign_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficSign_ & other) const
  {
    if (this->detection != other.detection) {
      return false;
    }
    if (this->corresponding_lane != other.corresponding_lane) {
      return false;
    }
    if (this->associated_sign != other.associated_sign) {
      return false;
    }
    if (this->associated_stop_line != other.associated_stop_line) {
      return false;
    }
    if (this->sign_type != other.sign_type) {
      return false;
    }
    if (this->sign_type_confidence != other.sign_type_confidence) {
      return false;
    }
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->start_day != other.start_day) {
      return false;
    }
    if (this->end_day != other.end_day) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficSign_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficSign_

// alias to use template instance with default allocator
using TrafficSign =
  autodrive_msgs::msg::TrafficSign_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::YIELD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::DO_NOT_ENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::NO_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::NO_STRAIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::NO_U_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::NO_RIGHT_ON_RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::RAILWAY_CROSSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::ONE_WAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::ROAD_CLOSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::NO_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrafficSign_<ContainerAllocator>::OTHER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__STRUCT_HPP_
