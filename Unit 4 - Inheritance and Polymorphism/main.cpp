#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
  Shape s("Foo");
  cout<<s.getName()<<endl;
  
  cout<<"\nCircle object:"<<endl;
  Circle c("Circle", 3.1);
  c.setName("Circle TOO");
  cout<<"Radius: "<<c.getRadius()<<endl;
  
  cout<<"\nRectangle object:"<<endl;
  Rectangle r("Rectangle", 3.4, 5.2);
  cout<<"Name: "<<r.getName()<<endl;
  cout<<"Width: "<<r.getWidth()<<", Length: "<<r.getLength()<<endl;
  
  cout<<"\nRectangle object:"<<endl;
  Triangle t("Triangle", 4.5, 6.1);
  cout<<"Base: "<<t.getBase()<<", Length: "<<t.getHeight()<<endl;
  
  return 0;
}