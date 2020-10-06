/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex19.cpp
illustrates function overloading
To Build: g++ ex19.cpp
To Execute: ./ex19 ex19.in ex19.out 
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
