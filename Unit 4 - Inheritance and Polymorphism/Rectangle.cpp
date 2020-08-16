#include "Rectangle.h"

Rectangle::Rectangle(string n, double l, double w) : Shape(n) {
  length = l;
  width = w;
}

void Rectangle::setLength(double l){
  length = l;
}

void Rectangle::setWidth(double w){
  width = w;
}

double Rectangle::getLength() const{
  return length;
}

double Rectangle::getWidth() const{
  return width;
}