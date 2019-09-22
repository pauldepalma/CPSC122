/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex20.cpp
swap three ways 
To Build: g++ ex20.cpp
To Execute: ./a.out integer 
*/

#include <iostream>
#include <cstdlib> 
using namespace std;

void swap1(int,int);
void swap2(int&,int&);
void swap3(int*,int*);

int main(int argc, char* argv[])
{
 int x = atoi(argv[1]); 
 int y = atoi(argv[2]);
 
 swap1(x,y);
 cout << x << " " << y << endl;
 swap2(x,y);
 cout << x << " " << y <<  endl;
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
