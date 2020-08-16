#include "Shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

//first child class
class Circle : public Shape
{
  double radius;
  
  public:
    Circle(string n, double r);
    void setRadius( double r);
    double getRadius() const;
};

#endif