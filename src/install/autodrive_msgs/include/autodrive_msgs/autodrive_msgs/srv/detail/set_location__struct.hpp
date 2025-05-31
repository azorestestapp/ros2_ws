// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:srv/SetLocation.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__SET_LOCATION__STRUCT_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__SET_LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'location'
#include "autodrive_msgs/msg/detail/location__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__SetLocation_Request __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__SetLocation_Request __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLocation_Request_
{
  using Type = SetLocation_Request_<ContainerAllocator>;

  explicit SetLocation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_init)
  {
    (void)_init;
  }

  explicit SetLocation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _location_type =
    autodrive_msgs::msg::Location_<ContainerAllocator>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__location(
    const autodrive_msgs::msg::Location_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__SetLocation_Request
    std::shared_ptr<autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__SetLocation_Request
    std::shared_ptr<autodrive_msgs::srv::SetLocation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLocation_Request_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLocation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLocation_Request_

// alias to use template instance with default allocator
using SetLocation_Request =
  autodrive_msgs::srv::SetLocation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__SetLocation_Response __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__SetLocation_Response __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLocation_Response_
{
  using Type = SetLocation_Response_<ContainerAllocator>;

  explicit SetLocation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = "";
      this->error = false;
    }
  }

  explicit SetLocation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__SetLocation_Response
    std::shared_ptr<autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__SetLocation_Response
    std::shared_ptr<autodrive_msgs::srv::SetLocation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLocation_Response_ & other) const
  {
    if (this->confirm != other.confirm) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLocation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLocation_Response_

// alias to use template instance with default allocator
using SetLocation_Response =
  autodrive_msgs::srv::SetLocation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs

namespace autodrive_msgs
{

namespace srv
{

struct SetLocation
{
  using Request = autodrive_msgs::srv::SetLocation_Request;
  using Response = autodrive_msgs::srv::SetLocation_Response;
};

}  // namespace srv

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__SET_LOCATION__STRUCT_HPP_
