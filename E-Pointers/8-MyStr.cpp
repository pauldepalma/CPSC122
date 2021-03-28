#include <iostream>
using namespace std;

#include "8-MyStr.h"
#include <cstring>

//Constructor function
MyString::MyString(char const* strIn)
{
 length = strlen(strIn);
 str = new char[length + 1];
 strcpy(str, strIn);

}

//Destructor function
//once you get the constructor working, remove the comments.
MyString::~MyString()
{
//delete []str; 
}

void MyString::myDisplay()
{
 cout << str << endl;
}


