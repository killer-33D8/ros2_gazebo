#!/usr/bin/env python3
import math

import rclpy
from geometry_msgs.msg import PoseArray, Quaternion, TransformStamped
from nav_msgs.msg import Odometry
from rclpy.node import Node
import tf2_ros
import tf_transformations


def normalize_angle(angle: float) -> float:
    return math.atan2(math.sin(angle), math.cos(angle))


class GazeboTfOdometry(Node):
    def __init__(self):
        super().__init__('gazebo_tf_odometry')

        self.declare_parameter('source_tf_topic', '/world/default/dynamic_pose/info')
        self.declare_parameter('source_pose_index', 0)
        self.declare_parameter('odom_topic', 'odometry/filtered')
        self.declare_parameter('base_frame_id', 'base_link')
        self.declare_parameter('odom_frame_id', 'odom')
        self.declare_parameter('publish_tf', True)

        self.source_tf_topic = self.get_parameter(
            'source_tf_topic').get_parameter_value().string_value
        self.source_pose_index = self.get_parameter(
            'source_pose_index').get_parameter_value().integer_value
        self.odom_topic = self.get_parameter(
            'odom_topic').get_parameter_value().string_value
        self.base_frame_id = self.get_parameter(
            'base_frame_id').get_parameter_value().string_value
        self.odom_frame_id = self.get_parameter(
            'odom_frame_id').get_parameter_value().string_value
        self.publish_tf = self.get_parameter(
            'publish_tf').get_parameter_value().bool_value

        self.odom_pub = self.create_publisher(Odometry, self.odom_topic, 10)
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self) if self.publish_tf else None
        self.pose_sub = self.create_subscription(
            PoseArray, self.source_tf_topic, self.pose_callback, 50)

        self.last_stamp_ns = None
        self.last_x = None
        self.last_y = None
        self.last_z = None
        self.last_yaw = None
        self.has_logged_source = False

        self.get_logger().info(
            f'Publishing truth odometry from {self.source_tf_topic} to {self.odom_topic}')

    def pose_callback(self, msg: PoseArray) -> None:
        if len(msg.poses) <= self.source_pose_index:
            return

        if not self.has_logged_source:
            self.get_logger().info(
                f'Using pose index [{self.source_pose_index}] from [{self.source_tf_topic}] to publish odometry'
            )
            self.has_logged_source = True

        self.publish_truth_odometry(msg.header.stamp, msg.poses[self.source_pose_index])

    def publish_truth_odometry(self, stamp, pose) -> None:
        stamp_ns = stamp.sec * 1_000_000_000 + stamp.nanosec

        x = pose.position.x
        y = pose.position.y
        z = pose.position.z

        q = pose.orientation
        quat = [q.x, q.y, q.z, q.w]
        roll, pitch, yaw = tf_transformations.euler_from_quaternion(quat)

        linear_x = 0.0
        linear_y = 0.0
        linear_z = 0.0
        angular_z = 0.0

        if self.last_stamp_ns is not None and stamp_ns > self.last_stamp_ns:
            dt = (stamp_ns - self.last_stamp_ns) / 1e9
            dx_world = x - self.last_x
            dy_world = y - self.last_y
            dz_world = z - self.last_z
            dyaw = normalize_angle(yaw - self.last_yaw)

            cos_yaw = math.cos(yaw)
            sin_yaw = math.sin(yaw)
            linear_x = (cos_yaw * dx_world + sin_yaw * dy_world) / dt
            linear_y = (-sin_yaw * dx_world + cos_yaw * dy_world) / dt
            linear_z = dz_world / dt
            angular_z = dyaw / dt

        self.last_stamp_ns = stamp_ns
        self.last_x = x
        self.last_y = y
        self.last_z = z
        self.last_yaw = yaw

        odom = Odometry()
        odom.header.stamp = stamp
        odom.header.frame_id = self.odom_frame_id
        odom.child_frame_id = self.base_frame_id
        odom.pose.pose.position.x = x
        odom.pose.pose.position.y = y
        odom.pose.pose.position.z = z
        odom.pose.pose.orientation = Quaternion(x=q.x, y=q.y, z=q.z, w=q.w)
        odom.twist.twist.linear.x = linear_x
        odom.twist.twist.linear.y = linear_y
        odom.twist.twist.linear.z = linear_z
        odom.twist.twist.angular.z = angular_z
        self.odom_pub.publish(odom)

        if self.tf_broadcaster is not None:
            odom_tf = TransformStamped()
            odom_tf.header.stamp = stamp
            odom_tf.header.frame_id = self.odom_frame_id
            odom_tf.child_frame_id = self.base_frame_id
            odom_tf.transform.translation.x = x
            odom_tf.transform.translation.y = y
            odom_tf.transform.translation.z = z
            odom_tf.transform.rotation = Quaternion(x=q.x, y=q.y, z=q.z, w=q.w)
            self.tf_broadcaster.sendTransform(odom_tf)


def main(args=None):
    rclpy.init(args=args)
    node = GazeboTfOdometry()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
