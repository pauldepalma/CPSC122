#include <iostream>
using namespace std;

#include "8-MyStr.h"
#include <cstring>

//Constructor function
MyString::MyString(char const* strIn)
{
 str = new char[strlen(strIn) + 1];
 strcpy(str,strIn);
 length = strlen(str);
}

//Destructor function
MyString::~MyString()
{
 delete [] str;
}

void MyString::myDisplay()
{
 for (int i = 0; i < length; i++)
  cout << str[i];
 cout << endl;
}

