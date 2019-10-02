#include <cstring>
#include <iostream>
using namespace std;

#include "ex23.h"

//Constructor function
MyString::MyString(char const* strIn)
{
}

//Destructor function
MyString::~MyString()
{
 delete [] str;
}

void MyString::myDisplay()
{
}

