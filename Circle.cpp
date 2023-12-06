#include <iostream>
#include <cmath>
#include "GenRectangle.h" 
#include "graph1.h" 
#include "Circle.h"

using namespace std;
const double Circle::PI = 3.14159628;

Circle::Circle()
{
 radius=0;
center.setPoint(0,0);

}
Circle::Circle(GenPoint center, int radius, Color c)
{
this->center=center;
this->radius=radius;
this->color=c;
}
void Circle::setCenter(GenPoint center)
{
 this->center.setPoint(center.getX(),center.getY());
}
void Circle::setRadius(int radius)
{
 this->radius=radius;
}
double Circle::getPerimeter()
{
  return(2 * radius * PI);
}
double Circle::getArea()
{
  return(radius * radius * PI);
}
void Circle::print()
{

  gout << setPos(0, 400) << "-----------------------------------------------------------------------------------" << endg;
  gout << setPos(200, 405) << "Shape info follows for: Circle";
  gout << setPos(200, 420) << "Center Point: (" << center.getX() << ", " << center.getY() << ")" << endg;
  gout << setPos(200, 435) << "Radius:" <<radius<< endg;
  gout << setPos(200, 450) << "Perimeter: " << getPerimeter() << " Area: " << getArea() << endg;
}
void Circle::draw()
{
int circle=0;
 circle=drawCircle(radius,center.getX(),center.getY());
 setColor(circle, color.getRed(), color.getGreen(), color.getBlue());

}
