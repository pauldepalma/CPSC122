#include <iostream>
using namespace std;

#include "ex23.h"

//Constructor function
MyString::MyString(char const* strIn)
{
 cout << "constructor" << endl;
 //determine the length of MyString instance
 length = 0;
 while(strIn[length] != '\0')
  length++;

 //dynamically allocate memory for MyString instance
 str = new char[length + 1];

 //copy contents of strIn to MyString instance
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
 delete [] str;
 cout << "destructor" << endl;
}

void MyString::myDisplay()
{
 for (int i = 0; i < length; i++)
  cout << str[i];
 cout << endl;
}

