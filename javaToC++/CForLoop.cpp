/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: CForLoop.cpp 
Program illustrates console i/o and a for loop;
To Build: g++ CForLoop.cpp 
To Execute: ./a.out
*/

#include <iostream>
using namespace std;


int main()
{
  int howMany; 

  cout << "How many integers do you want to see?" << endl; 
  cin >> howMany;

  for (int i = 0; i < howMany; i++)
    cout << i << endl;

  return 0;
} 


