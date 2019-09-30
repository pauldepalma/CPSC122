#include <cstring>
#include <iostream>
using namespace std;

#include "ex23.h"

//Constructor function
MyString::MyString(char const* strIn)
{
 length = 0; 
 while (strIn[length] != '\0')
  length++; 
 str = new char[length + 1];

 int i = 0; 
 while (i < length)
 {
  str[i] = strIn[i];
  i++;
 }
 str[i] = '\0';
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

