#include <iostream>
#include <cmath>
#include "Quadrilateral.h" 
#include "graph1.h" 
#include "GenPoint.h"
#include "Color.h"
#include "Trapezoid.h"
#include"Triangle.h"
#include"RightTriangle.h"

using namespace std;


RightTriangle::RightTriangle()
{
  Triangle::Triangle();
}
RightTriangle::RightTriangle(GenPoint vertex, int height, int base, Color color)
{
  this->c= vertex;
  this->a.setPoint(c.getX(),c.getY()-base);
  b.setPoint(c.getX()+height,c.getY());
  this->color=color;

}
void RightTriangle::print()
{
 Triangle::print();
 gout << setPos(0, 15)<<"Right Triangle"<<endg;

  gout << setPos(0, 400) << "-----------------------------------------------------------------------------------" << endg;
  gout << setPos(200, 405) << "Shape info follows for: Triangle";
  gout << setPos(200, 420) << "Point a: (" << c.getX() << ", " << c.getY() << ")" << endg;
  gout << setPos(200, 435) << "Point b: (" << a.getX() << ", " << a.getY() << ")" << endg;
  gout << setPos(200, 450) << "Point c: (" << b.getX() << ", " << b.getY() << ")" << endg;
  gout << setPos(200, 480) << "Perimeter: " << getPerimeter() << " Area: " << getArea() << endg;
}