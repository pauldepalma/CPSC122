/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates using class MyString 
*/


#include "8-MyStr.h"
#include <iostream> 
using namespace std;

int main(int argc, char* argv[])
{
 MyString str1(argv[1]); //causes the constructor to run
 str1.myDisplay();

 MyString* str2 = new MyString(argv[1]);
 str2->myDisplay();
 delete str2;
 return 0;  //destructor runs because str1 goes out of scope
}
   
  
