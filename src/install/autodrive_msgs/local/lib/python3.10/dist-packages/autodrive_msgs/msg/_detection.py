# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/Detection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Detection(type):
    """Metaclass of message 'Detection'."""

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
                'autodrive_msgs.msg.Detection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection

            from autodrive_msgs.msg import DynamicObstacle
            if DynamicObstacle.__class__._TYPE_SUPPORT is None:
                DynamicObstacle.__class__.__import_type_support__()

            from autodrive_msgs.msg import GeneralDetection
            if GeneralDetection.__class__._TYPE_SUPPORT is None:
                GeneralDetection.__class__.__import_type_support__()

            from autodrive_msgs.msg import RailroadCrossing
            if RailroadCrossing.__class__._TYPE_SUPPORT is None:
                RailroadCrossing.__class__.__import_type_support__()

            from autodrive_msgs.msg import SpeedLimit
            if SpeedLimit.__class__._TYPE_SUPPORT is None:
                SpeedLimit.__class__.__import_type_support__()

            from autodrive_msgs.msg import StaticObstacle
            if StaticObstacle.__class__._TYPE_SUPPORT is None:
                StaticObstacle.__class__.__import_type_support__()

            from autodrive_msgs.msg import Stopline
            if Stopline.__class__._TYPE_SUPPORT is None:
                Stopline.__class__.__import_type_support__()

            from autodrive_msgs.msg import TrafficLight
            if TrafficLight.__class__._TYPE_SUPPORT is None:
                TrafficLight.__class__.__import_type_support__()

            from autodrive_msgs.msg import TrafficSign
            if TrafficSign.__class__._TYPE_SUPPORT is None:
                TrafficSign.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Detection(metaclass=Metaclass_Detection):
    """Message class 'Detection'."""

    __slots__ = [
        '_header',
        '_detection',
        '_dynamic_obstacles',
        '_static_obstacles',
        '_railroad_crossings',
        '_traffic_lights',
        '_traffic_signs',
        '_speed_limits',
        '_stop_lines',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'detection': 'sequence<autodrive_msgs/GeneralDetection>',
        'dynamic_obstacles': 'sequence<autodrive_msgs/DynamicObstacle>',
        'static_obstacles': 'sequence<autodrive_msgs/StaticObstacle>',
        'railroad_crossings': 'sequence<autodrive_msgs/RailroadCrossing>',
        'traffic_lights': 'sequence<autodrive_msgs/TrafficLight>',
        'traffic_signs': 'sequence<autodrive_msgs/TrafficSign>',
        'speed_limits': 'sequence<autodrive_msgs/SpeedLimit>',
        'stop_lines': 'sequence<autodrive_msgs/Stopline>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'GeneralDetection')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'DynamicObstacle')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'StaticObstacle')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'RailroadCrossing')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'TrafficLight')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'TrafficSign')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'SpeedLimit')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'Stopline')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.detection = kwargs.get('detection', [])
        self.dynamic_obstacles = kwargs.get('dynamic_obstacles', [])
        self.static_obstacles = kwargs.get('static_obstacles', [])
        self.railroad_crossings = kwargs.get('railroad_crossings', [])
        self.traffic_lights = kwargs.get('traffic_lights', [])
        self.traffic_signs = kwargs.get('traffic_signs', [])
        self.speed_limits = kwargs.get('speed_limits', [])
        self.stop_lines = kwargs.get('stop_lines', [])

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
        if self.header != other.header:
            return False
        if self.detection != other.detection:
            return False
        if self.dynamic_obstacles != other.dynamic_obstacles:
            return False
        if self.static_obstacles != other.static_obstacles:
            return False
        if self.railroad_crossings != other.railroad_crossings:
            return False
        if self.traffic_lights != other.traffic_lights:
            return False
        if self.traffic_signs != other.traffic_signs:
            return False
        if self.speed_limits != other.speed_limits:
            return False
        if self.stop_lines != other.stop_lines:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def detection(self):
        """Message field 'detection'."""
        return self._detection

    @detection.setter
    def detection(self, value):
        if __debug__:
            from autodrive_msgs.msg import GeneralDetection
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, GeneralDetection) for v in value) and
                 True), \
                "The 'detection' field must be a set or sequence and each value of type 'GeneralDetection'"
        self._detection = value

    @builtins.property
    def dynamic_obstacles(self):
        """Message field 'dynamic_obstacles'."""
        return self._dynamic_obstacles

    @dynamic_obstacles.setter
    def dynamic_obstacles(self, value):
        if __debug__:
            from autodrive_msgs.msg import DynamicObstacle
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, DynamicObstacle) for v in value) and
                 True), \
                "The 'dynamic_obstacles' field must be a set or sequence and each value of type 'DynamicObstacle'"
        self._dynamic_obstacles = value

    @builtins.property
    def static_obstacles(self):
        """Message field 'static_obstacles'."""
        return self._static_obstacles

    @static_obstacles.setter
    def static_obstacles(self, value):
        if __debug__:
            from autodrive_msgs.msg import StaticObstacle
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, StaticObstacle) for v in value) and
                 True), \
                "The 'static_obstacles' field must be a set or sequence and each value of type 'StaticObstacle'"
        self._static_obstacles = value

    @builtins.property
    def railroad_crossings(self):
        """Message field 'railroad_crossings'."""
        return self._railroad_crossings

    @railroad_crossings.setter
    def railroad_crossings(self, value):
        if __debug__:
            from autodrive_msgs.msg import RailroadCrossing
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, RailroadCrossing) for v in value) and
                 True), \
                "The 'railroad_crossings' field must be a set or sequence and each value of type 'RailroadCrossing'"
        self._railroad_crossings = value

    @builtins.property
    def traffic_lights(self):
        """Message field 'traffic_lights'."""
        return self._traffic_lights

    @traffic_lights.setter
    def traffic_lights(self, value):
        if __debug__:
            from autodrive_msgs.msg import TrafficLight
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TrafficLight) for v in value) and
                 True), \
                "The 'traffic_lights' field must be a set or sequence and each value of type 'TrafficLight'"
        self._traffic_lights = value

    @builtins.property
    def traffic_signs(self):
        """Message field 'traffic_signs'."""
        return self._traffic_signs

    @traffic_signs.setter
    def traffic_signs(self, value):
        if __debug__:
            from autodrive_msgs.msg import TrafficSign
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TrafficSign) for v in value) and
                 True), \
                "The 'traffic_signs' field must be a set or sequence and each value of type 'TrafficSign'"
        self._traffic_signs = value

    @builtins.property
    def speed_limits(self):
        """Message field 'speed_limits'."""
        return self._speed_limits

    @speed_limits.setter
    def speed_limits(self, value):
        if __debug__:
            from autodrive_msgs.msg import SpeedLimit
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, SpeedLimit) for v in value) and
                 True), \
                "The 'speed_limits' field must be a set or sequence and each value of type 'SpeedLimit'"
        self._speed_limits = value

    @builtins.property
    def stop_lines(self):
        """Message field 'stop_lines'."""
        return self._stop_lines

    @stop_lines.setter
    def stop_lines(self, value):
        if __debug__:
            from autodrive_msgs.msg import Stopline
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Stopline) for v in value) and
                 True), \
                "The 'stop_lines' field must be a set or sequence and each value of type 'Stopline'"
        self._stop_lines = value
