/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date: January 9, 2022
File Name: ex6.cpp
Assignment Name: Example 7 
Description: program illustrates ideas pracrices so far
The program displays in columns the first n exponentiated ingters.  
Input:: how many numbers, how many columns, exponent
*/

#include <iostream>
using namespace std;

void display(int,int,int);
int power(int,int);  
void error(int);

int main()
{
 int nums, cols, base, exp;

 cout << "How many numbers do you want to see? " << endl; 
 cin >>  nums;
 if (nums < 1)
    error(1);

 cout << "Displayed over how many columns? " << endl; 
 cin >> cols;
 if (cols < 1)
    error(2);

 cout << "Enter an exponent" << endl; 
 cin >> exp;
 if (exp < 0)
    error(3);

 display(nums,cols,exp);
 cout << endl;
 return 0;
} 

void display(int nums, int cols, int exp)
{
 int ct = 1;
 int value = 0; 
 while (ct <= nums)
 {
  value = power(ct,exp);
  cout << value << '\t';
  //if (ct % cols == cols - 1)  //start counting from 0
  if (ct % cols == 0)  //start counting from 1
   cout << endl;
  ct++;
 }
}
 
int power(int base, int exp)
{
 int value = 1;

 for (int i = 0; i < exp; i++)
  value = value * base;
 return value;
}

void error(int code)
{
 if (code == 1)
  {
   cout <<  "Numbers displayed must be >= 1" << endl;
   exit(EXIT_FAILURE);
  }
 if (code == 2)
  {
   cout <<  "Columns must be >= 1" << endl;
   exit(EXIT_FAILURE);
  }
 if (code == 3)
  {
   cout <<  "Exponent must be >= 0" << endl;
   exit(EXIT_FAILURE);
  }
}
