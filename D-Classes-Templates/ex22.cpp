//Implementation file//

#include <iostream>
using namespace std;

#include "ex22.h"

Rectangle::Rectangle(int widthIn, int lengthIn)
{
 width = widthIn;
 length = lengthIn;
 display();
 cout << "I am a Rectangle" << endl;
 cout << "I know my width: " <<  width << endl;
 cout << "I know my length: " <<  length << endl;
 cout << "I have some accessors (setters): getWidth, getLength, getArea" << endl;
 cout << "I have some mutators (getters): setWidth, setLength, setArea" << endl;
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

void Rectangle::display()
{
   cout << "Float like a butterfly, sting like a bee" << endl;
}
