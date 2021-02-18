/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates function templates 
*/

#include <iostream>
using namespace std;

template <class ItemType> 
ItemType square(ItemType);

int main(int argc, char* argv[])
{
  cout << square(5) << endl;
  cout << square(5.75) << endl;
}

template <class ItemType> 
ItemType square(ItemType num)
{
 return num * num;
}



