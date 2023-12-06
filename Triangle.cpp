#include <iostream>
#include <cmath>
#include "Quadrilateral.h" 
#include "graph1.h" 
#include "GenPoint.h"
#include "Color.h"
#include "Trapezoid.h"
#include "Triangle.h"

using namespace std;

Triangle::Triangle()
{
  a.setPoint(0,0);
  b.setPoint(0, 0);
  c.setPoint(0, 0);

}
Triangle::Triangle(GenPoint a, GenPoint b, GenPoint c, Color color)
{
  this->a = a;
  this->b = b;
  this->c = c;
 this->color=color;
}
void Triangle::setPoints(GenPoint a, GenPoint b, GenPoint c)
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

}
double Triangle::getArea()
{
 double side1=0.0;
 double side2 = 0.0;
 double side3 = 0.0;
  double s =0.0;  
  double area=0.0;

 side1= sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
side2= sqrt(pow(c.getX() - b.getX(), 2) + pow(c.getY() - b.getY(), 2));
side3= sqrt(pow(c.getX() - a.getX(), 2) + pow(c.getY() - a.getY(), 2));
s= (side1+side2+side3)/2.0;

 area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

  return area;
}
double Triangle::getPerimeter()
{
  double perimeter = 0.0;
  double l1 = 0;
  double l2 = 0;
  double l3 = 0;
  l1 = sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
  l2 = sqrt(pow(c.getX() - b.getX(), 2) + pow(c.getY() - b.getY(), 2));
  l3 = sqrt(pow(c.getX() - a.getX(), 2) + pow(c.getY() - a.getY(), 2));

  perimeter=l1+l2+l3;
  
  return perimeter;
}
void Triangle:: print()
{
  gout << setPos(0, 400) << "-----------------------------------------------------------------------------------" << endg;
  gout << setPos(200, 405) << "Shape info follows for: Triangle";
  gout << setPos(200, 420) << "Point a: (" << a.getX() << ", " << a.getY() << ")" << endg;
  gout << setPos(200, 435) << "Point b: (" << b.getX() << ", " << b.getY() << ")" << endg;
  gout << setPos(200, 450) << "Point c: (" << c.getX() << ", " << c.getY() << ")" << endg;
  gout << setPos(200, 480) << "Perimeter: " << getPerimeter() <<" Area: "<<getArea()<< endg;

}
void Triangle::draw()
{
  int line1 = 0;
  int line2 = 0;
  int line3 = 0;



  //color each line repectively
  //line1
  line1 = drawLine(a.getX(), a.getY(), b.getX(), b.getY(), 2);
  setColor(line1, color.getRed(), color.getGreen(), color.getBlue());
  //line2
  line2 = drawLine(b.getX(), b.getY(), c.getX(), c.getY(), 2);
  setColor(line2, color.getRed(), color.getGreen(), color.getBlue());
  //line3
  line3 = drawLine(c.getX(), c.getY(), a.getX(), a.getY(), 2);
  setColor(line3, color.getRed(), color.getGreen(), color.getBlue());

}