#include "Shape.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

//second child class
class Rectangle : public Shape
{
  double length, width;
  
  public:
    Rectangle(string n, double l, double w);
    void setLength(double l);
    void setWidth(double w);
    double getLength() const;
    double getWidth() const;
    
};

#endif