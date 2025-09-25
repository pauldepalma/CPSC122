#include <iostream>
using namespace std;

#include "8-MyStr.h"
#include <cstring>

//Constructor
MyString::MyString(char const* strIn)
{
 int length = myStrLen(strIn);
 str = new char[length + 1];
 int i = 0;
 while(i < length)
 {
  str[i] = strIn[i];
  i++;
 }
 str[i] = '\0';

}

//Destructor function
MyString::~MyString()
{
 delete []str; 
}

void MyString::myDisplay()
{
 cout << str << endl;
}

int MyString::myStrLen(char const* strIn)
{
 int idx = 0;
 while (strIn[idx] != '\0')
  idx++;
 return idx;
}

int MyString::myStrlen()
{
 return myStrLen(str);
}
