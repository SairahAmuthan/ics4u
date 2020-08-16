#include "Triangle.h"

Triangle::Triangle(string n, double b, double h) : Shape (n){
  base = b;
  height = h;
}
    
void Triangle::setBase(double b){
  base = b;
}

void Triangle::setHeight(double h){
  height = h;
}

double Triangle::getBase() const{
  return base;
}

double Triangle::getHeight() const{
  return height;
}