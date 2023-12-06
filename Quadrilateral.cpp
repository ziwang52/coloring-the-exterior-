#include <iostream>
#include <cmath>
#include "Quadrilateral.h" 
#include "graph1.h" 
#include "GenPoint.h"
#include "Color.h"

using namespace std;

Quadrilateral :: Quadrilateral() //Sets all points/colors to 0
{
 a.setPoint(0,0);
 b.setPoint(0, 0);
 c.setPoint(0, 0);
 d.setPoint(0, 0);
//set b , c d
}
Quadrilateral::Quadrilateral(GenPoint a, GenPoint b, GenPoint c, GenPoint d, Color color)
{
  this->a=a;
  this->b=b;
  this->c=c;
  this->d =d;
 this->color=color;

}

void Quadrilateral::setPoints(GenPoint a, GenPoint b, GenPoint c, GenPoint d)
{
  int temp_x =0;
  int temp_y = 0;
    // check a
  if (a.getX() < 0)
  {
      temp_x=0;
  }
  else if (a.getX() > 639)
  {
    temp_x= 639;
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
   this->a.setPoint(temp_x,temp_y);

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

double Quadrilateral::getPerimeter()
{
//dist= sqrt((x2-x1)^2+(y2-y1)^2)

  double perimeter = 0.0;
  double l1 = 0;
  double l2 = 0;
  double l3 = 0;
  double l4 = 0;

  //compute the distance of each line
  //use the line formula
  //line a-b
  //line between 2 points in a coordinate
  l1 = sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
  l2 = sqrt(pow(c.getX() - b.getX(), 2) + pow(c.getY() - b.getY(), 2));
  l3 = sqrt(pow(c.getX() - d.getX(), 2) + pow(c.getY() - d.getY(), 2));
  l4 = sqrt(pow(d.getX() - a.getX(), 2) + pow(d.getY() - a.getY(), 2));
  perimeter = l1 + l2 + l3 + l4;

  return perimeter;
}
void Quadrilateral::print()
{
  gout << setPos(0, 400) << "-----------------------------------------------------------------------------------" << endg;
  gout << setPos(200, 405) << "Shape info follows for: Quadrilateral";
  gout << setPos(200, 420) << "Point a: (" << a.getX() << ", " << a.getY() << ")" << endg;
  gout << setPos(200, 435) << "Point b: (" << b.getX() << ", " << b.getY() << ")" << endg;
  gout << setPos(200, 450) << "Point c: (" << c.getX() << ", " << c.getY() << ")" << endg;
  gout << setPos(200, 465) << "Point d: (" << d.getX() << ", " << d.getY() << ")" << endg;
  gout << setPos(200, 480) << "Perimeter: " << getPerimeter() << endg;

}
void Quadrilateral::draw()
{
  int line1 = 0;
  int line2 = 0;
  int line3 = 0;
  int line4 = 0;

  //drews lines based on the 4 points a b c d 
  //color each line repectively
  //line1
  line1 = drawLine(a.getX(), a.getY(), b.getX(), b.getY(), 2);
   setColor(line1, color.getRed(), color.getGreen(), color.getBlue());
  //line2
  line2 = drawLine(b.getX(), b.getY(), c.getX(), c.getY(), 2);
  setColor(line2, color.getRed(), color.getGreen(), color.getBlue());
  //line3
  line3 = drawLine(c.getX(), c.getY(), d.getX(), d.getY(), 2);
  setColor(line3, color.getRed(), color.getGreen(), color.getBlue());
  //line4
  line4 = drawLine(d.getX(), d.getY(), a.getX(), a.getY(), 2);
  setColor(line4, color.getRed(), color.getGreen(), color.getBlue());
}