
/*
Class: CPSC 122
Section: 01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex16.cpp
Program illustrates classes and 3 file compilation 
To Build: g++ ex16Tst.cpp ex16.cpp
To Execute: ./a.out 
*/

#include "ex16.h"
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
