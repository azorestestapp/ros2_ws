from py_trees.common import Status
from py_trees.composites import Sequence
from behaviour_planner_pkg.utilities import (
    Placeholder,
    SetSpeed)


def get_speed_limit_tree(bt_instance):
    speed_limit_sequence = Sequence(name="speed_limit_sequence", memory=False)  # No memory to not get stuck at the placeholder and thus respond to all new speed limit detections
    speed_limit_sequence.add_children([
        SetSpeed("set_speed", bt_instance, bt_instance.detection.max_speed, bt_instance.detection.unit, 15, start_ahead_distance=5),
        Placeholder("keep_tree_running", Status.RUNNING)
    ])
    return speed_limit_sequence
