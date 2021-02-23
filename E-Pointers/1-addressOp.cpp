
/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 25, 2021
Assignment: N/A 
Description: Program illustrates the address operator 
*/


#include <iostream>
#include <cstdlib> 
using namespace std;

int main(int argc, char* argv[])
{
 int var = 7; 

 cout << "Value stored in variable, var: " << var << endl;
 cout << "Size of var in bytes: " << sizeof(var) << endl;
 cout << "Address of var: " << &var << endl;

 return 0;
}
