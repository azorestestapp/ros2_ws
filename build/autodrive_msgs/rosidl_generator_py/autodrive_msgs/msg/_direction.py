# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/Direction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Direction(type):
    """Metaclass of message 'Direction'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEFAULT': 0,
        'STRAIGHT': 1,
        'LEFT_TURN': 2,
        'RIGHT_TURN': 3,
        'LEFT_LANE_CHANGE': 4,
        'RIGHT_LANE_CHANGE': 5,
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
                'autodrive_msgs.msg.Direction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__direction
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__direction
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__direction
            cls._TYPE_SUPPORT = module.type_support_msg__msg__direction
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__direction

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEFAULT': cls.__constants['DEFAULT'],
            'STRAIGHT': cls.__constants['STRAIGHT'],
            'LEFT_TURN': cls.__constants['LEFT_TURN'],
            'RIGHT_TURN': cls.__constants['RIGHT_TURN'],
            'LEFT_LANE_CHANGE': cls.__constants['LEFT_LANE_CHANGE'],
            'RIGHT_LANE_CHANGE': cls.__constants['RIGHT_LANE_CHANGE'],
        }

    @property
    def DEFAULT(self):
        """Message constant 'DEFAULT'."""
        return Metaclass_Direction.__constants['DEFAULT']

    @property
    def STRAIGHT(self):
        """Message constant 'STRAIGHT'."""
        return Metaclass_Direction.__constants['STRAIGHT']

    @property
    def LEFT_TURN(self):
        """Message constant 'LEFT_TURN'."""
        return Metaclass_Direction.__constants['LEFT_TURN']

    @property
    def RIGHT_TURN(self):
        """Message constant 'RIGHT_TURN'."""
        return Metaclass_Direction.__constants['RIGHT_TURN']

    @property
    def LEFT_LANE_CHANGE(self):
        """Message constant 'LEFT_LANE_CHANGE'."""
        return Metaclass_Direction.__constants['LEFT_LANE_CHANGE']

    @property
    def RIGHT_LANE_CHANGE(self):
        """Message constant 'RIGHT_LANE_CHANGE'."""
        return Metaclass_Direction.__constants['RIGHT_LANE_CHANGE']


class Direction(metaclass=Metaclass_Direction):
    """
    Message class 'Direction'.

    Constants:
      DEFAULT
      STRAIGHT
      LEFT_TURN
      RIGHT_TURN
      LEFT_LANE_CHANGE
      RIGHT_LANE_CHANGE
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'type' field must be an integer in [-128, 127]"
        self._type = value
