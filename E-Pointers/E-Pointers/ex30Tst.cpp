/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex30Tst.cpp
Test file for a string class: ex29.h and ex29.cpp 
To Build: g++ ex30Tst.cpp ex29.cpp
To Execute: ./a.out Higgledy 
*/


#include "ex30.h"
#include <iostream> 
using namespace std;

int main(int argc, char* argv[])
{
 MyString str1(argv[1]); //causes the constructor to run
 str1.myDisplay();
 return 0;  //destructor runs because str1 goes out of scope
}
   
  
