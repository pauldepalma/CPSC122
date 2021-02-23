/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates dynamic array declaration 
*/


#include <iostream>
#include <cstdlib> 
using namespace std;

void getData(int*,int);

int main(int argc, char* argv[])
{

 int size = atoi(argv[1]);

 int* stuff = new int[size];
  
 getData(stuff, size); 

 for (int i = 0; i < size; i++)
  cout << stuff[i] << endl;

 return 0;
}

void getData(int* stuff, int size)
{
 for (int i = 0; i < size; i++)
   stuff[i] = i;

}

