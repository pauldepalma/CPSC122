#include <iostream>
using namespace std;

#include "ex30.h"
#include <cstring>

//Constructor function
MyString::MyString(char const* strIn)
{
 cout << "in the constructor" << endl;
 /*an OK way 
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
 */
 //A better way
 str = new char[strlen(strIn) + 1];
 strcpy(str,strIn);
 length = strlen(str);
}

//Destructor function
MyString::~MyString()
{
 cout << "in the destructor" << endl;
 delete [] str;
}

void MyString::myDisplay()
{
 for (int i = 0; i < length; i++)
  cout << str[i];
 cout << endl;
}

