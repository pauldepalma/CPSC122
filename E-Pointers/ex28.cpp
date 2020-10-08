/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex20.cpp
swap three ways 
To Build: g++ ex28.cpp
To Execute: ./a.out  
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
