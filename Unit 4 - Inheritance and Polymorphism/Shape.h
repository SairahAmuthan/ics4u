#include <iostream>
#include <string>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

//base class
class Shape
{
  protected:
    string name;
  
  public:
    Shape(string s);
    void setName(string s);
    string getName() const;
    
};


#endif
