/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex19.cpp
illustrates dynamic memory
To Build: g++ ex19.cpp
To Execute: ./a.out integer 
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

//add 10 to each of the parameters
void getData(int* stuff, int size)
{
 for (int i = 0; i < size; i++)
   stuff[i] = i;

}

