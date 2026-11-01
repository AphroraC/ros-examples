// //pluginlib 宏，可以注册插件类
// #include <pluginlib/class_list_macros.h>
// #include "plugin_demo/polygon_base.h"
// #include "plugin_demo/polygon_plugins.h"

// //参数1:衍生类 参数2:基类
// PLUGINLIB_EXPORT_CLASS(polygon_plugins::Triangle, polygon_base::RegularPolygon)
// PLUGINLIB_EXPORT_CLASS(polygon_plugins::Square, polygon_base::RegularPolygon)

#include <pluginlib/class_list_macros.h>
#include "plugin_demo/polygon_base.h"
#include "plugin_demo/polygon_plugins.h"

PLUGINLIB_EXPORT_CLASS(polygon_plugins_ns::Triangle,polygon_base_ns::Regular_Polygon)
PLUGINLIB_EXPORT_CLASS(polygon_plugins_ns::Square,polygon_base_ns::Regular_Polygon)