/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates swap three ways 
*/



#include <iostream>
#include <cstdlib> 
using namespace std;

void swap1(int,int);     //int args
void swap2(int&,int&);   //reference to int args
void swap3(int*,int*);   //pointer to int args

int main()
{
 int x = 0 ;
 int y = 0 ;

 x = 5;
 y = 10; 
 swap1(x,y);
 cout << x << " " << y <<  endl;

 x = 5; 
 y = 10; 
 swap2(x,y);
 cout << x << " " << y <<  endl;
 
 x = 5; 
 y = 10; 
 swap3(&x,&y);
 cout << x << " " << y << endl;

 return 0;
}


void swap1(int x, int y)
{
 int tmp;
 tmp = x;
 x = y;
 y = tmp;
}

void swap2(int& x, int& y)
{
 int tmp;
 tmp = x;
 x = y;
 y = tmp;
}

void swap3(int* x, int* y)
{
 int tmp;
 tmp = *x;
 *x = *y;
 *y = tmp;
}
