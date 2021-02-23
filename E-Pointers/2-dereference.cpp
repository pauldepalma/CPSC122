
/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates dereferencing 
*/

#include <iostream>
#include <cstdlib> //necessary for atoi
using namespace std;

int main(int argc, char* argv[])
{
 int var = atoi(argv[1]); 
 int* addrVar;

 //assign the address of var to addrVar
 addrVar = &var;

 //We can now get to the value of var by dereferencign addrVar
 cout << "Here is the value stored in variable, var: " << var << endl;
 cout << "Here is the address of var: " << &var << endl;
 cout << "It is the same as value stored in addrVar: " << addrVar << endl;
 cout << "addrVar points to var " << endl;
 cout << "Dereference addrVar to get to the value of var: " << *addrVar << endl;

 return 0;
}
