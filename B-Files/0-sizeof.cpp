/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: January 17, 2021
Assignment: Example 0 
Description: Program illustrates size of various data types
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{

 unsigned int intu;
 long int intl;
 short int ints;
 cout << "Bytes in char: " << sizeof(char) << endl; 
 cout << "Bytes in int: " << sizeof(int) << endl; 
 cout << "Bytes in unsigned int: " << sizeof(intu) << endl; 
 cout << "Bytes in long int: " << sizeof(intl) << endl; 
 cout << "Bytes in short int: " << sizeof(ints) << endl; 
 cout << "Bytes in float: " << sizeof(float) << endl; 
 cout << "Bytes in double: " << sizeof(double) << endl; 
 cout << "Largest signed integer: " << INT_MAX << endl;
 cout << "Smallest signed integer: " << INT_MIN << endl;

}

