//Implementation file
#include "ex22.h"

Rectangle::Rectangle(int widthIn, int lengthIn)
{
 width = widthIn;
 length = lengthIn;
}

void Rectangle::setWidth(double widthIn)
{
 width = widthIn;
} 
 
void Rectangle::setLength(double lengthIn)
{
 length = lengthIn;
} 

double Rectangle::getWidth() const
{
 return width;
} 
 
double Rectangle::getLength() const
{
 return length;
} 

double Rectangle::getArea() const
{
 return length * width;
} 

