#include "ros/ros.h"
#include "dynamic_reconfigure/server.h"
#include "dynamic_cfg_demo/drConfig.h"

void cb(dynamic_cfg_demo::drConfig &config,uint32_t level);
int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    ros::init(argc, argv, "dr_server");
    dynamic_reconfigure::Server<dynamic_cfg_demo::drConfig> server;
    server.setCallback(boost::bind(&cb,_1,_2));
    ros::spin();
    return 1;
}
void cb(dynamic_cfg_demo::drConfig &config,uint32_t level)
{
    ROS_INFO("midified int: %d %.2f %s %d %d",
    
    config.int_param,
    config.double_param,
    config.str_param.c_str(),
    config.bool_param,
    config.list_param


    );
    
}