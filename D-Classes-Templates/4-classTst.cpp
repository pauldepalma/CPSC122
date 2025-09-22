/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: 9/22/2025
Assignment: N/A 
Description: Program illustrates classes and 3 file compilation 
*/

#include <iostream>
using namespace std;

//Notice that only the header file is included
#include "4-class.h"

int main(int argc, char* argv[])
{
 int widthIn = atoi(argv[1]);
 int lengthIn = atoi(argv[2]);

 //This invokes the constructor function
 Rectangle box(widthIn, lengthIn);

 cout << "My area is: " << box.getArea() << endl;
 box.setWidth(10);
 box.setLength(20);
 cout << "I have reset my width: " << box.getWidth() << endl;
 cout << "I have reset my length: " << box.getLength() << endl;
 cout << "My new area is: " << box.getArea() << endl;

 return 0;

}
