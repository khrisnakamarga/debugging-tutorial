#!/usr/bin/env python

"""
This script is used to demonstrate ROS breakpoint debugging
"""

import rospy
from std_msgs.msg import String, Int8

from person import Person


if __name__ == "__main__":
    rospy.init_node("ros_debugging")

    khrisna = Person("Khrisna", 23)

    def name_cb(msg):
        khrisna.set_name(msg.data)
    
    def age_cb(msg):
        khrisna.set_age(msg.data)

    rospy.Subscriber("name", String, name_cb)
    rospy.Subscriber("age", Int8, age_cb)

    while not rospy.is_shutdown():
        khrisna.introduce()
        rospy.sleep(5)
