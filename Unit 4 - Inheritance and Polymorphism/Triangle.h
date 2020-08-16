#include "Shape.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H

//third child class
class Triangle : public Shape
{
  double base, height;
  
  public:
    Triangle(string n, double b, double h);
    void setBase(double b);
    void setHeight(double h);
    double getBase() const;
    double getHeight() const;
    
  
};

#endif