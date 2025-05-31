# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/WheelVelocities.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelVelocities(type):
    """Metaclass of message 'WheelVelocities'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autodrive_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autodrive_msgs.msg.WheelVelocities')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheel_velocities
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheel_velocities
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheel_velocities
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheel_velocities
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheel_velocities

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WheelVelocities(metaclass=Metaclass_WheelVelocities):
    """Message class 'WheelVelocities'."""

    __slots__ = [
        '_front_left_velocity',
        '_front_right_velocity',
        '_rear_left_velocity',
        '_rear_right_velocity',
        '_steering_angle',
    ]

    _fields_and_field_types = {
        'front_left_velocity': 'double',
        'front_right_velocity': 'double',
        'rear_left_velocity': 'double',
        'rear_right_velocity': 'double',
        'steering_angle': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.front_left_velocity = kwargs.get('front_left_velocity', float())
        self.front_right_velocity = kwargs.get('front_right_velocity', float())
        self.rear_left_velocity = kwargs.get('rear_left_velocity', float())
        self.rear_right_velocity = kwargs.get('rear_right_velocity', float())
        self.steering_angle = kwargs.get('steering_angle', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.front_left_velocity != other.front_left_velocity:
            return False
        if self.front_right_velocity != other.front_right_velocity:
            return False
        if self.rear_left_velocity != other.rear_left_velocity:
            return False
        if self.rear_right_velocity != other.rear_right_velocity:
            return False
        if self.steering_angle != other.steering_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def front_left_velocity(self):
        """Message field 'front_left_velocity'."""
        return self._front_left_velocity

    @front_left_velocity.setter
    def front_left_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_left_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_left_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_left_velocity = value

    @builtins.property
    def front_right_velocity(self):
        """Message field 'front_right_velocity'."""
        return self._front_right_velocity

    @front_right_velocity.setter
    def front_right_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_right_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_right_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_right_velocity = value

    @builtins.property
    def rear_left_velocity(self):
        """Message field 'rear_left_velocity'."""
        return self._rear_left_velocity

    @rear_left_velocity.setter
    def rear_left_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_left_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_left_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_left_velocity = value

    @builtins.property
    def rear_right_velocity(self):
        """Message field 'rear_right_velocity'."""
        return self._rear_right_velocity

    @rear_right_velocity.setter
    def rear_right_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_right_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_right_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_right_velocity = value

    @builtins.property
    def steering_angle(self):
        """Message field 'steering_angle'."""
        return self._steering_angle

    @steering_angle.setter
    def steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_angle = value
