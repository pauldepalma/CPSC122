



/*
Name: Paul De Palma
Class: CPSC122, Section 1
Date: January 17, 2021
Assignment: Example 3 
Description: Program illustrates console i/o and a for loop;
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


