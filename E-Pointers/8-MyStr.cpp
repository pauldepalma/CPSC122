#include <iostream>
using namespace std;

#include "8-MyStr.h"
#include <cstring>

//Constructor function
MyString::MyString(char const* strIn)
{
 cout << "constructor" << endl;
}

//Destructor function
MyString::~MyString()
{
 cout << "destructor" << endl;
}

void MyString::myDisplay()
{
 cout << "myDisplay" << endl;
}

