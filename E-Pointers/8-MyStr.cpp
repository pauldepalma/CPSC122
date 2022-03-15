#include <iostream>
using namespace std;

#include "8-MyStr.h"
#include <cstring>

//Constructor
MyString::MyString(char const* strIn)
{
 length = strlen(strIn);  //strlen function
 str = new char[length + 1];
 strcpy(str, strIn); //strlen function

}

//Destructor function
//once you get the constructor working, remove the comments.
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
