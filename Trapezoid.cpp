#include <iostream>
#include <cmath>
#include "Quadrilateral.h" 
#include "graph1.h" 
#include "GenPoint.h"
#include "Color.h"
#include "Trapezoid.h"
using namespace std;

Trapezoid::Trapezoid()
{
  a.setPoint(0, 0);
  b.setPoint(0, 0);
  c.setPoint(0, 0);
  d.setPoint(0, 0);
}
Trapezoid::Trapezoid(GenPoint a, GenPoint b, GenPoint c, GenPoint d, Color color)
{
  this->a = a;
  this->b = b;
  this->c = c;
  this->d = d;
  this->color = color;
}
void Trapezoid::setPoints(GenPoint a, GenPoint b, GenPoint c, GenPoint d)
{
  int temp_x = 0;
  int temp_y = 0;
  // check a
  if (a.getX() < 0)
  {
    temp_x = 0;
  }
  else if (a.getX() > 639)
  {
    temp_x = 639;
  }
  else
  {
    temp_x = a.getX();
  }

  if (a.getY() < 0)
  {
    temp_y = 0;
  }
  else if (a.getY() > 399)
  {
    temp_y = 399;
  }
  else
  {
    temp_y = a.getY();
  }
  this->a.setPoint(temp_x, temp_y);

  //check b 
  if (b.getX() < 0)
  {
    temp_x = 0;
  }
  else if (b.getX() > 639)
  {
    temp_x = 639;
  }
  else
  {
    temp_x = b.getX();
  }

  if (b.getY() < 0)
  {
    temp_y = 0;
  }
  else if (b.getY() > 399)
  {
    temp_y = 399;
  }
  else
  {
    temp_y = b.getY();
  }
  this->b.setPoint(temp_x, temp_y);
  // set b

 //check c
  if (c.getX() < 0)
  {
    temp_x = 0;
  }
  else if (c.getX() > 639)
  {
    temp_x = 639;
  }
  else
  {
    temp_x = c.getX();
  }

  if (c.getY() < 0)
  {
    temp_y = 0;
  }
  else if (c.getY() > 399)
  {
    temp_y = 399;
  }
  else
  {
    temp_y = c.getY();
  }
  this->c.setPoint(temp_x, temp_y);

  //check d 
  if (d.getX() < 0)
  {
    temp_x = 0;
  }
  else if (d.getX() > 639)
  {
    temp_x = 639;
  }
  else
  {
    temp_x = d.getX();
  }

  if (d.getY() < 0)
  {
    temp_y = 0;
  }
  else if (d.getY() > 399)
  {
    temp_y = 399;
  }
  else
  {
    temp_y = d.getY();
  }
  this->d.setPoint(temp_x, temp_y);
}
double Trapezoid::getArea()
{
  double area = 0.0;
  
  double hight = 0.0;
  double base1=0.0;
  double base2= 0.0;

  hight = sqrt(pow(c.getX() - b.getX(), 2) + pow(c.getY() - b.getY(), 2));
 base1 = sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
 base2 = sqrt(pow(c.getX() - d.getX(), 2) + pow(c.getY() - d.getY(), 2));
  area= 0.5*(base1+base2)*hight;
  
  return area;
}
void Trapezoid::print()
{
 Quadrilateral::print();
 gout << setPos(0,15) << "Trapezoid Information" << endg;
 gout << setPos(0,30) << "Area: " << getArea() << endg;
 gout << setPos(0, 400) << "------------------------------------------------------------------------------------" << endg;
 gout << setPos(200, 405) << "Shape info follows for: Quadrilateral";
 gout << setPos(200, 420) << "Point a: (" << a.getX() << ", " << a.getY() << ")" << endg;
 gout << setPos(200, 435) << "Point b: (" << b.getX() << ", " << b.getY() << ")" << endg;
 gout << setPos(200, 450) << "Point c: (" << c.getX() << ", " << c.getY() << ")" << endg;
 gout << setPos(200, 465) << "Point d: (" << d.getX() << ", " << d.getY() << ")" << endg;
 gout << setPos(200, 480) << "Perimeter: " << getPerimeter() << endg;
}