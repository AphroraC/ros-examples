#include "ros/ros.h"
#include "pluginlib/class_loader.h"
#include "plugin_demo/polygon_base.h"

int main(int argc, char  *argv[])
{
    pluginlib::ClassLoader<polygon_base_ns::Regular_Polygon> loader("plugin_demo", "polygon_base_ns::Regular_Polygon");
    auto tri=loader.createInstance("polygon_plugins_ns::Triangle");
    tri->init(10);
    double length = tri->getLength();
    ROS_INFO("length: %.2f",length);
    return 0;
}
