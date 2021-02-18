/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates function overloading 
*/

#include <iostream>
using namespace std;

//overloaded functions
int square(int);
double square(double);

int main(int argc, char* argv[])
{
  cout << square(5) << endl;
  cout << square(5.75) << endl;
}


int square(int num)
{
 return num * num;
}

double square(double num)
{
 return num * num;
}
