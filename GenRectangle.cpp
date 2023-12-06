#include <iostream>
#include <cmath>
#include "GenRectangle.h" 
#include "graph1.h" 


GenRectangle::GenRectangle()
{
//does nothing
}
GenRectangle::GenRectangle(GenPoint ul, GenPoint lr, Color c)
{
  a.setPoint(ul.getX(), ul.getY());
  this->c.setPoint(lr.getX(), lr.getY());
  b.setPoint(lr.getX(), ul.getY());
  d.setPoint(ul.getX(), lr.getY());

  this->color=c;
}

void GenRectangle::setPoints(GenPoint ul, GenPoint lr)
{
  // determine a-d
  a.setPoint(ul.getX(), ul.getY());
  c.setPoint(lr.getX(), lr.getY());
  b.setPoint(lr.getX(), ul.getY());
  d.setPoint(ul.getX(), lr.getY());
// set a-d
  Quadrilateral::setPoints(a,b,c,d);
}
double GenRectangle::getArea()
{
  double area = 0.0;
  double width = 0.0;
  double hight = 0.0;

  width = sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
  hight = sqrt(pow(c.getX() - b.getX(), 2) + pow(c.getY() - b.getY(), 2));
  area = width * hight;

  return area;
}
void GenRectangle::print()
{
  Quadrilateral::print();
  
  gout << setPos(0,15) << "Rectangle Information" << endg;
  gout << setPos(0,30) << "Area: " << getArea() << endg;
  gout << setPos(0, 400) << "------------------------------------------------------------------------------------" << endg;
  gout << setPos(200, 405) << "Shape info follows for: Quadrilateral";
  gout << setPos(200, 420) << "Point a: (" << a.getX() << ", " << a.getY() << ")" << endg;
  gout << setPos(200, 435) << "Point b: (" << b.getX() << ", " << b.getY() << ")" << endg;
  gout << setPos(200, 450) << "Point c: (" << c.getX() << ", " << c.getY() << ")" << endg;
  gout << setPos(200, 465) << "Point d: (" << d.getX() << ", " << d.getY() << ")" << endg;
  gout << setPos(200, 480) << "Perimeter: " << getPerimeter() << endg;
}