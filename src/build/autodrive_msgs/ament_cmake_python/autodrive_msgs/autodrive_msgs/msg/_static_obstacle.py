# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/StaticObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StaticObstacle(type):
    """Metaclass of message 'StaticObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TRAFFIC_CONE': 0,
        'BARRIER': 1,
        'BIKE_LANE_PROTECTOR': 2,
        'SPEED_BUMP': 3,
        'MISC': 4,
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
                'autodrive_msgs.msg.StaticObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__static_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__static_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__static_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__static_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__static_obstacle

            from autodrive_msgs.msg import GeneralDetection
            if GeneralDetection.__class__._TYPE_SUPPORT is None:
                GeneralDetection.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TRAFFIC_CONE': cls.__constants['TRAFFIC_CONE'],
            'BARRIER': cls.__constants['BARRIER'],
            'BIKE_LANE_PROTECTOR': cls.__constants['BIKE_LANE_PROTECTOR'],
            'SPEED_BUMP': cls.__constants['SPEED_BUMP'],
            'MISC': cls.__constants['MISC'],
        }

    @property
    def TRAFFIC_CONE(self):
        """Message constant 'TRAFFIC_CONE'."""
        return Metaclass_StaticObstacle.__constants['TRAFFIC_CONE']

    @property
    def BARRIER(self):
        """Message constant 'BARRIER'."""
        return Metaclass_StaticObstacle.__constants['BARRIER']

    @property
    def BIKE_LANE_PROTECTOR(self):
        """Message constant 'BIKE_LANE_PROTECTOR'."""
        return Metaclass_StaticObstacle.__constants['BIKE_LANE_PROTECTOR']

    @property
    def SPEED_BUMP(self):
        """Message constant 'SPEED_BUMP'."""
        return Metaclass_StaticObstacle.__constants['SPEED_BUMP']

    @property
    def MISC(self):
        """Message constant 'MISC'."""
        return Metaclass_StaticObstacle.__constants['MISC']


class StaticObstacle(metaclass=Metaclass_StaticObstacle):
    """
    Message class 'StaticObstacle'.

    Constants:
      TRAFFIC_CONE
      BARRIER
      BIKE_LANE_PROTECTOR
      SPEED_BUMP
      MISC
    """

    __slots__ = [
        '_detection',
        '_obstacle_type',
        '_static_obstacle_confidence',
    ]

    _fields_and_field_types = {
        'detection': 'autodrive_msgs/GeneralDetection',
        'obstacle_type': 'int8',
        'static_obstacle_confidence': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'GeneralDetection'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autodrive_msgs.msg import GeneralDetection
        self.detection = kwargs.get('detection', GeneralDetection())
        self.obstacle_type = kwargs.get('obstacle_type', int())
        self.static_obstacle_confidence = kwargs.get('static_obstacle_confidence', float())

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
        if self.obstacle_type != other.obstacle_type:
            return False
        if self.static_obstacle_confidence != other.static_obstacle_confidence:
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
    def obstacle_type(self):
        """Message field 'obstacle_type'."""
        return self._obstacle_type

    @obstacle_type.setter
    def obstacle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstacle_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'obstacle_type' field must be an integer in [-128, 127]"
        self._obstacle_type = value

    @builtins.property
    def static_obstacle_confidence(self):
        """Message field 'static_obstacle_confidence'."""
        return self._static_obstacle_confidence

    @static_obstacle_confidence.setter
    def static_obstacle_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'static_obstacle_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'static_obstacle_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._static_obstacle_confidence = value
