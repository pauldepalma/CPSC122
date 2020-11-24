/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex27.cpp
illustrates passing a reference to dynamically declared memory 
To Build: g++ ex20.cpp
To Execute: ./a.out integer 
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

