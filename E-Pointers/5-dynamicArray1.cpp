/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: 9/23/2025 
Assignment: N/A 
Description: Dynamically create an array in a function 
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

//create an array.  Notice that it's not locals
int* getData(int size)
{
 int* arrayStuff = new int[size];

 for (int i = 0; i < size; i++)
   arrayStuff[i] = i + 10;
 return arrayStuff;
}

