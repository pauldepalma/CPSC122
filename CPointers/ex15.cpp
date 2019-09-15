/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex15.cpp
Illustrates pointers 
To Build: g++ ex15.cpp
To Execute: ./a.out integer 
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

 cout << "Value stored in variable, var: " << var << endl;
 cout << "Address of var: "  << &var << endl;
 cout << "Value stored in variable, addrVar: "  << addrVar << endl; 
 cout << "It is the same as the address of var" << endl;
 cout << "We say 'addrVar points to var' " << endl;
 cout << "Size of addrVar in bytes: " << sizeof(addrVar) << endl; 

 return 0;
}
