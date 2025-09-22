//Implementation file//

#include <iostream>
using namespace std;

//Notice that the header file is included
#include "4-class.h"

Rectangle::Rectangle(int widthIn, int lengthIn)
{
 width = widthIn;
 length = lengthIn;
 cout << "I am a Rectangle" << endl;
 cout << "I know my width: " <<  width << endl;
 cout << "I know my length: " <<  length << endl;
 cout << "I have some accessors (getters): getWidth, getLength, getArea" << endl;
 cout << "I have some mutators (setters): setWidth, setLength, setArea" << endl;
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

