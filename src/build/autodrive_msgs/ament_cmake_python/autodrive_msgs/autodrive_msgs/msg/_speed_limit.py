# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/SpeedLimit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeedLimit(type):
    """Metaclass of message 'SpeedLimit'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MPS': 0,
        'KPH': 1,
        'MPH': 2,
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
                'autodrive_msgs.msg.SpeedLimit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__speed_limit
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__speed_limit
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__speed_limit
            cls._TYPE_SUPPORT = module.type_support_msg__msg__speed_limit
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__speed_limit

            from autodrive_msgs.msg import GeneralDetection
            if GeneralDetection.__class__._TYPE_SUPPORT is None:
                GeneralDetection.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MPS': cls.__constants['MPS'],
            'KPH': cls.__constants['KPH'],
            'MPH': cls.__constants['MPH'],
        }

    @property
    def MPS(self):
        """Message constant 'MPS'."""
        return Metaclass_SpeedLimit.__constants['MPS']

    @property
    def KPH(self):
        """Message constant 'KPH'."""
        return Metaclass_SpeedLimit.__constants['KPH']

    @property
    def MPH(self):
        """Message constant 'MPH'."""
        return Metaclass_SpeedLimit.__constants['MPH']


class SpeedLimit(metaclass=Metaclass_SpeedLimit):
    """
    Message class 'SpeedLimit'.

    Constants:
      MPS
      KPH
      MPH
    """

    __slots__ = [
        '_detection',
        '_max_speed',
        '_min_speed',
        '_speed_limit_confidence',
        '_unit',
        '_speed_limit_unit_confidence',
    ]

    _fields_and_field_types = {
        'detection': 'autodrive_msgs/GeneralDetection',
        'max_speed': 'uint32',
        'min_speed': 'uint32',
        'speed_limit_confidence': 'float',
        'unit': 'uint32',
        'speed_limit_unit_confidence': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'GeneralDetection'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autodrive_msgs.msg import GeneralDetection
        self.detection = kwargs.get('detection', GeneralDetection())
        self.max_speed = kwargs.get('max_speed', int())
        self.min_speed = kwargs.get('min_speed', int())
        self.speed_limit_confidence = kwargs.get('speed_limit_confidence', float())
        self.unit = kwargs.get('unit', int())
        self.speed_limit_unit_confidence = kwargs.get('speed_limit_unit_confidence', float())

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
        if self.detection != other.detection:
            return False
        if self.max_speed != other.max_speed:
            return False
        if self.min_speed != other.min_speed:
            return False
        if self.speed_limit_confidence != other.speed_limit_confidence:
            return False
        if self.unit != other.unit:
            return False
        if self.speed_limit_unit_confidence != other.speed_limit_unit_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def detection(self):
        """Message field 'detection'."""
        return self._detection

    @detection.setter
    def detection(self, value):
        if __debug__:
            from autodrive_msgs.msg import GeneralDetection
            assert \
                isinstance(value, GeneralDetection), \
                "The 'detection' field must be a sub message of type 'GeneralDetection'"
        self._detection = value

    @builtins.property
    def max_speed(self):
        """Message field 'max_speed'."""
        return self._max_speed

    @max_speed.setter
    def max_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_speed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_speed' field must be an unsigned integer in [0, 4294967295]"
        self._max_speed = value

    @builtins.property
    def min_speed(self):
        """Message field 'min_speed'."""
        return self._min_speed

    @min_speed.setter
    def min_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_speed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'min_speed' field must be an unsigned integer in [0, 4294967295]"
        self._min_speed = value

    @builtins.property
    def speed_limit_confidence(self):
        """Message field 'speed_limit_confidence'."""
        return self._speed_limit_confidence

    @speed_limit_confidence.setter
    def speed_limit_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_limit_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_limit_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_limit_confidence = value

    @builtins.property
    def unit(self):
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'unit' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'unit' field must be an unsigned integer in [0, 4294967295]"
        self._unit = value

    @builtins.property
    def speed_limit_unit_confidence(self):
        """Message field 'speed_limit_unit_confidence'."""
        return self._speed_limit_unit_confidence

    @speed_limit_unit_confidence.setter
    def speed_limit_unit_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_limit_unit_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_limit_unit_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_limit_unit_confidence = value
