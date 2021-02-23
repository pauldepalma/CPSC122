/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates other aspects of dynamic array declaration
*/


#include <iostream>
#include <cstdlib> 
using namespace std;

int*  getData(int);

int main(int argc, char* argv[])
{

 int size = atoi(argv[1]);

  
 int* stuff = getData(size); 

 for (int i = 0; i < size; i++)
  cout << stuff[i] << endl;

 return 0;
}

//add 10 to each of the parameters
int* getData(int size)
{
 int* arrayStuff = new int[size];

 for (int i = 0; i < size; i++)
   arrayStuff[i] = i;
 return arrayStuff;
}

