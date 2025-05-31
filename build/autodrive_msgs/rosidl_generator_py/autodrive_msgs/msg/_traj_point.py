# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/TrajPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajPoint(type):
    """Metaclass of message 'TrajPoint'."""

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
                'autodrive_msgs.msg.TrajPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traj_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traj_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traj_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traj_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traj_point

            from autodrive_msgs.msg import Direction
            if Direction.__class__._TYPE_SUPPORT is None:
                Direction.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajPoint(metaclass=Metaclass_TrajPoint):
    """Message class 'TrajPoint'."""

    __slots__ = [
        '_east',
        '_north',
        '_speed',
        '_lanelet_id',
        '_direction',
    ]

    _fields_and_field_types = {
        'east': 'double',
        'north': 'double',
        'speed': 'double',
        'lanelet_id': 'int64',
        'direction': 'autodrive_msgs/Direction',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'Direction'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.east = kwargs.get('east', float())
        self.north = kwargs.get('north', float())
        self.speed = kwargs.get('speed', float())
        self.lanelet_id = kwargs.get('lanelet_id', int())
        from autodrive_msgs.msg import Direction
        self.direction = kwargs.get('direction', Direction())

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
        if self.east != other.east:
            return False
        if self.north != other.north:
            return False
        if self.speed != other.speed:
            return False
        if self.lanelet_id != other.lanelet_id:
            return False
        if self.direction != other.direction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def east(self):
        """Message field 'east'."""
        return self._east

    @east.setter
    def east(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'east' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'east' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._east = value

    @builtins.property
    def north(self):
        """Message field 'north'."""
        return self._north

    @north.setter
    def north(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'north' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'north' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._north = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def lanelet_id(self):
        """Message field 'lanelet_id'."""
        return self._lanelet_id

    @lanelet_id.setter
    def lanelet_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanelet_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lanelet_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lanelet_id = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            from autodrive_msgs.msg import Direction
            assert \
                isinstance(value, Direction), \
                "The 'direction' field must be a sub message of type 'Direction'"
        self._direction = value
