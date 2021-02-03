#include "ros/ros.h"
#include "std_msgs/String.h"
#include <vector>

using namespace std;

class Something {
    public:
    ros::NodeHandle m_nh;
    ros::Subscriber m_sub;
    vector<string> m_saved_msgs;


    Something(ros::NodeHandle& nh) : m_nh(nh) {
        m_sub = m_nh.subscribe("/test", 1, &Something::callback, this);
    };

    void callback(const std_msgs::String::ConstPtr& msg) {
        ROS_INFO_STREAM("I heard: " << msg->data);
        m_saved_msgs.push_back(msg->data);
    };
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "ros_debugging");
    ros::NodeHandle nh;

    Something something(nh);

    ros::spin();

    return 0;
}