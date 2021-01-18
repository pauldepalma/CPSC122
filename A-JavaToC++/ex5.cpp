/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date: January 17, 2021
File Name: ex5.cpp
Assignment Name: Example 5
Description: program illustrates
  int function with integer arguments
  for loop
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

