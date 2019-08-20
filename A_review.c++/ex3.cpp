/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex3.cpp
Program illustrates
  int function with integer arguments
  for loop
To Build: g++ ex3.cpp -o example3
To Execute: ./example3
*/

#include <iostream>
using namespace std;

int power(int,int);  

int main()
{
 int base, exp; 

 cout << "Enter a base" << endl; 
 cin >>  base;
 
 cout << "Enter an exponent" << endl; 
 cin >> exp;

 cout << base << " to the " << exp << " power is: "; 
 cout << power(base, exp) << endl; 

 return 0;
} 

int power(int base, int exp)
{
 int value = 1;

 for (int i = 0; i < exp; i++)
  value = value * base;

 return value;
}

