// #ifndef POLYGON_PLUGINS_H
// #define POLYGON_PLUGINS_H
// #include "plugin_demo/polygon_base.h"
// #include <cmath>

// namespace polygon_plugins
// {
//   class Triangle : public polygon_base::RegularPolygon
//   {
//     public:
//       Triangle(){}

//       void initialize(double side_length)
//       {
//         side_length_ = side_length;
//       }

//       double area()
//       {
//         return 0.5 * side_length_ * getHeight();
//       }

//       double getHeight()
//       {
//         return sqrt((side_length_ * side_length_) - ((side_length_ / 2) * (side_length_ / 2)));
//       }

//     private:
//       double side_length_;
//   };

//   class Square : public polygon_base::RegularPolygon
//   {
//     public:
//       Square(){}

//       void initialize(double side_length)
//       {
//         side_length_ = side_length;
//       }

//       double area()
//       {
//         return side_length_ * side_length_;
//       }

//     private:
//       double side_length_;

//   };
// };
// #endif

#ifndef POLYGON_PLUGINS_H
#define POLYGON_PLUGINS_H
#include "plugin_demo/polygon_base.h"

namespace polygon_plugins_ns{
    class Triangle : public polygon_base_ns::Regular_Polygon{
        private:
            double side_length;
        public:
            Triangle():side_length(0.0) {};
            void init(double side_length) { this->side_length = side_length; };
            double getLength() { return 3 * this->side_length; };
    };
    class Square : public polygon_base_ns::Regular_Polygon{
        private:
            double side_length;
        public:
            Square():side_length(0.0) {};
            void init(double side_length) { this->side_length = side_length; };
            double getLength() { return 4 * this->side_length; };
    };
}

#endif