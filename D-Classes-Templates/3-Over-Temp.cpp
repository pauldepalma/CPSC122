/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: 9.22/2025
Assignment: N/A 
Description: Overloads vs. templates


*/

#include <iostream>
using namespace std;


//overload code for multiple numeric types
int max(int a, int b);
int max(double a, double b);
int max(long a, long b);

template <class T> 
T maxT(T a,T b);



int main(int argc, char* argv[])
{
  int a = 10;
  int b = 11;
  cout << max(a,b) << endl;
  
  double c = 10.5;
  double d = 11.7;
  cout << max(c,d) << endl;
  
  
  long long e = 3000000000;
  long long f = 3000000001;
  cout << max(e,f) << endl;
  
  
  cout << maxT(a,b) << endl;
  cout << maxT(c,d) << endl;
  cout << maxT(e,f) << endl;

}

int max(int a, int b)
{
  if (a > b)
     return a;
  return b;
}
int max(double a, double b)
{
  if (a > b)
     return a;
  return b;
}

int max(long a, long b)
{
  if (a > b)
     return a;
  return b;
}

template <class T> 
T maxT(T a, T b)
{
  if (a > b)
    return a;
  return b;
}







