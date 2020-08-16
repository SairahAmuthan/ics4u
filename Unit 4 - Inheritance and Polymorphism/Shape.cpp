#include "Shape.h"

Shape::Shape(string s)
{
   name = s; 
}

void Shape :: setName(string s)
{
   name = s;
}

string Shape :: getName() const 
{
   return name;
}