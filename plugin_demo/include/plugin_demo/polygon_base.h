// #ifndef POLYGON_BASE_H
// #define POLYGON_BASE_H

// namespace polygon_base
// {
//   class RegularPolygon
//   {
//     public:
//       virtual void initialize(double side_length) = 0;
//       virtual double area() = 0;
//       virtual ~RegularPolygon(){}

//     protected:
//       RegularPolygon(){}
//   };
// };
// #endif


#ifndef POLYGON_BASE_H
#define POLYGON_BASE_H

namespace polygon_base_ns
{
class Regular_Polygon
{
public:
  virtual double getLength()=0;
  virtual void init(double side_length) = 0;

protected:
  Regular_Polygon(){};
};



};

#endif