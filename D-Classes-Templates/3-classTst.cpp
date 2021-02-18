/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates classes and 3 file compilation 
*/

#include "3-class.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
 int widthIn = atoi(argv[1]);
 int lengthIn = atoi(argv[2]);

 Rectangle box(widthIn, lengthIn);

 cout << "My area is: " << box.getArea() << endl;
 box.setWidth(10);
 box.setLength(20);
 cout << "I have reset my width: " << box.getWidth() << endl;
 cout << "I have reset my length: " << box.getLength() << endl;
 cout << "My new area is: " << box.getArea() << endl;

 return 0;

}
