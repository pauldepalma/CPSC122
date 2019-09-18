/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex14.cpp
Illustrates address operator 
To Build: g++ ex14.cpp
To Execute: ./a.out integer 
*/

#include <iostream>
#include <cstdlib> //necessary for atoi
using namespace std;

int main(int argc, char* argv[])
{
 int var = atoi(argv[1]); 

 cout << "Value stored in variable, var: " << var << endl;
 cout << "Size of var in bytes: " << sizeof(var) << endl;
 cout << "Address of var: " << &var << endl;

 return 0;
}
