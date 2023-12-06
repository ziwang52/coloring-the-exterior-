#include <iostream>
#include <cmath>
#include "Quadrilateral.h" 
#include "graph1.h" 
#include "GenPoint.h"
#include "Color.h"
#include "Shape.h"
using namespace std;


Shape::Shape()
//Default Constructor - sets color to (0,0,0)
{
  color.setColor(0,0,0);
}
Color Shape::getColor()  //Getter for Color
{
   
color.getBlue();
color.getGreen();
color.getRed();
   return color;
}
 void Shape::setCol(Color color) //Setter for Color
 {
  this->color=color;
}
