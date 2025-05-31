// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:srv/Reroute.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__REROUTE__STRUCT_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__REROUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__Reroute_Request __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__Reroute_Request __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reroute_Request_
{
  using Type = Reroute_Request_<ContainerAllocator>;

  explicit Reroute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Reroute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _start_lanelet_id_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _start_lanelet_id_type start_lanelet_id;
  using _end_lanelet_id_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _end_lanelet_id_type end_lanelet_id;

  // setters for named parameter idiom
  Type & set__start_lanelet_id(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->start_lanelet_id = _arg;
    return *this;
  }
  Type & set__end_lanelet_id(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->end_lanelet_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::srv::Reroute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::Reroute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::Reroute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::Reroute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::Reroute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::Reroute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::Reroute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::Reroute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::Reroute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::Reroute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__Reroute_Request
    std::shared_ptr<autodrive_msgs::srv::Reroute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__Reroute_Request
    std::shared_ptr<autodrive_msgs::srv::Reroute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reroute_Request_ & other) const
  {
    if (this->start_lanelet_id != other.start_lanelet_id) {
      return false;
    }
    if (this->end_lanelet_id != other.end_lanelet_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reroute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reroute_Request_

// alias to use template instance with default allocator
using Reroute_Request =
  autodrive_msgs::srv::Reroute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__Reroute_Response __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__Reroute_Response __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reroute_Response_
{
  using Type = Reroute_Response_<ContainerAllocator>;

  explicit Reroute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = "";
      this->error = false;
    }
  }

  explicit Reroute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : confirm(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = "";
      this->error = false;
    }
  }

  // field types and members
  using _confirm_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _confirm_type confirm;
  using _error_type =
    bool;
  _error_type error;

  // setters for named parameter idiom
  Type & set__confirm(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->confirm = _arg;
    return *this;
  }
  Type & set__error(
    const bool & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::srv::Reroute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::Reroute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::Reroute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::Reroute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::Reroute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::Reroute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::Reroute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::Reroute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::Reroute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::Reroute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__Reroute_Response
    std::shared_ptr<autodrive_msgs::srv::Reroute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__Reroute_Response
    std::shared_ptr<autodrive_msgs::srv::Reroute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reroute_Response_ & other) const
  {
    if (this->confirm != other.confirm) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reroute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reroute_Response_

// alias to use template instance with default allocator
using Reroute_Response =
  autodrive_msgs::srv::Reroute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs

namespace autodrive_msgs
{

namespace srv
{

struct Reroute
{
  using Request = autodrive_msgs::srv::Reroute_Request;
  using Response = autodrive_msgs::srv::Reroute_Response;
};

}  // namespace srv

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__REROUTE__STRUCT_HPP_
