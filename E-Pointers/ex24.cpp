/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex24.cpp
Illustrates dereferencing 
To Build: g++ ex24.cpp
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

 //We can now get to the value of var by dereferencign addrVar
 cout << "Here is the value stored in variable, var: " << var << endl;
 cout << "Here is the address of var: " << &var << endl;
 cout << "It is the same as value stored in addrVar: " << addrVar << endl;
 cout << "addrVar points to var " << endl;
 cout << "Dereference addrVar to get to the value of var: " << *addrVar << endl;

 return 0;
}
