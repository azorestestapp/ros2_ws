# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/DynamicObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DynamicObstacle(type):
    """Metaclass of message 'DynamicObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE': 0,
        'BIKER': 1,
        'PEDESTRIAN': 2,
        'DEER': 3,
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
                'autodrive_msgs.msg.DynamicObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dynamic_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dynamic_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dynamic_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dynamic_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dynamic_obstacle

            from autodrive_msgs.msg import GeneralDetection
            if GeneralDetection.__class__._TYPE_SUPPORT is None:
                GeneralDetection.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VEHICLE': cls.__constants['VEHICLE'],
            'BIKER': cls.__constants['BIKER'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'DEER': cls.__constants['DEER'],
            'MISC': cls.__constants['MISC'],
        }

    @property
    def VEHICLE(self):
        """Message constant 'VEHICLE'."""
        return Metaclass_DynamicObstacle.__constants['VEHICLE']

    @property
    def BIKER(self):
        """Message constant 'BIKER'."""
        return Metaclass_DynamicObstacle.__constants['BIKER']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_DynamicObstacle.__constants['PEDESTRIAN']

    @property
    def DEER(self):
        """Message constant 'DEER'."""
        return Metaclass_DynamicObstacle.__constants['DEER']

    @property
    def MISC(self):
        """Message constant 'MISC'."""
        return Metaclass_DynamicObstacle.__constants['MISC']


class DynamicObstacle(metaclass=Metaclass_DynamicObstacle):
    """
    Message class 'DynamicObstacle'.

    Constants:
      VEHICLE
      BIKER
      PEDESTRIAN
      DEER
      MISC
    """

    __slots__ = [
        '_detection',
        '_obstacle_type',
        '_dynamic_confidence',
    ]

    _fields_and_field_types = {
        'detection': 'autodrive_msgs/GeneralDetection',
        'obstacle_type': 'int8',
        'dynamic_confidence': 'float',
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
        self.dynamic_confidence = kwargs.get('dynamic_confidence', float())

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
        if self.dynamic_confidence != other.dynamic_confidence:
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
    def dynamic_confidence(self):
        """Message field 'dynamic_confidence'."""
        return self._dynamic_confidence

    @dynamic_confidence.setter
    def dynamic_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dynamic_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dynamic_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dynamic_confidence = value
