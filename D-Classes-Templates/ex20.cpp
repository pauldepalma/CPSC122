/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex20.cpp
illustrates function templates 
To Build: g++ ex20.cpp
To Execute: ./ex20 ex20.in ex20.out 
*/

#include <iostream>
#include <iomanip>
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



