#!/usr/bin/env python3
"""
两目标点往返巡航：在 A、B 两点之间循环导航。
需先启动仿真 + Nav2，再运行本节点。
  ros2 run gazebo_sim patrol_shuttle.py --ros-args -p goal_a_x:=0 -p goal_b_x:=2
"""
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import PoseStamped, Quaternion
import math


def yaw_to_quaternion(yaw_rad: float) -> Quaternion:
    q = Quaternion()
    q.x = 0.0
    q.y = 0.0
    q.z = math.sin(yaw_rad / 2.0)
    q.w = math.cos(yaw_rad / 2.0)
    return q


class PatrolShuttleNode(Node):
    def __init__(self):
        super().__init__("patrol_shuttle")
        self.declare_parameter("namespace", "robot1")
        self.declare_parameter("goal_a_x", 0.0)
        self.declare_parameter("goal_a_y", 0.0)
        self.declare_parameter("goal_a_yaw", 0.0)
        self.declare_parameter("goal_b_x", 2.0)
        self.declare_parameter("goal_b_y", 0.0)
        self.declare_parameter("goal_b_yaw", 0.0)
        self.declare_parameter("frame_id", "map")

        ns = self.get_parameter("namespace").value
        action_name = f"{ns}/navigate_to_pose"
        self._client = ActionClient(self, NavigateToPose, action_name)
        self._goal_handle = None
        self._current_goal = "B"

    def _make_pose(self, x: float, y: float, yaw_rad: float) -> PoseStamped:
        pose = PoseStamped()
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.header.frame_id = self.get_parameter("frame_id").value
        pose.pose.position.x = float(x)
        pose.pose.position.y = float(y)
        pose.pose.position.z = 0.0
        pose.pose.orientation = yaw_to_quaternion(yaw_rad)
        return pose

    def _send_goal(self, goal_pose: PoseStamped):
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose = goal_pose
        self.get_logger().info(
            f"Sending goal: ({goal_pose.pose.position.x:.2f}, {goal_pose.pose.position.y:.2f})"
        )
        self._client.wait_for_server()
        self._send_goal_future = self._client.send_goal_async(
            goal_msg, feedback_callback=self._feedback_cb
        )
        self._send_goal_future.add_done_callback(self._goal_response_cb)

    def _feedback_cb(self, msg):
        pass

    def _goal_response_cb(self, future):
        self._goal_handle = future.result()
        if not self._goal_handle.accepted:
            self.get_logger().error("Goal rejected.")
            self._schedule_next()
            return
        self._result_future = self._goal_handle.get_result_async()
        self._result_future.add_done_callback(self._result_cb)

    def _result_cb(self, future):
        self.get_logger().info("Goal reached. Switching to next point.")
        self._schedule_next()

    def _schedule_next(self):
        if self._current_goal == "B":
            self._current_goal = "A"
            ax = self.get_parameter("goal_a_x").value
            ay = self.get_parameter("goal_a_y").value
            ayaw = self.get_parameter("goal_a_yaw").value
            pose = self._make_pose(ax, ay, ayaw)
        else:
            self._current_goal = "B"
            bx = self.get_parameter("goal_b_x").value
            by = self.get_parameter("goal_b_y").value
            byaw = self.get_parameter("goal_b_yaw").value
            pose = self._make_pose(bx, by, byaw)
        self._send_goal(pose)

    def start(self):
        self.get_logger().info("Patrol shuttle started (A <-> B). Ctrl+C to stop.")
        self._schedule_next()


def main(args=None):
    rclpy.init(args=args)
    node = PatrolShuttleNode()
    try:
        node.start()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
