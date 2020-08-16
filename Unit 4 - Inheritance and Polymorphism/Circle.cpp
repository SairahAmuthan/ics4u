#include "Circle.h"

Circle::Circle(string n, double r) : Shape( n )
{
  radius = r;
}

void Circle::setRadius( double r)
{
  radius = r;
}

double Circle::getRadius() const
{
  return radius;
}