/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex18.cpp
array names and pointers 2
To Build: g++ ex18.cpp
To Execute: ./a.out integer 
*/

#include <iostream>
#include <cstdlib> //necessary for atoi
using namespace std;

void passStuff(int*,int);

int main(int argc, char* argv[])
{
 int size = 5;
 int dataArray[size];
 int dataPtr = 1;
 int data = 1;
 for (int i = 0; i < 5; i++)
   dataArray[i] = i; 
	 
 passStuff(dataArray,size);

 cout << "Array" << endl;
 for (int i = 0; i < size; i++)
   cout << dataArray[i] << endl;


 return 0;
}

//add 10 to each of the parameters
void passStuff(int* dataArray,int size)
{
 for (int i = 0; i < 5; i++)
   dataArray[i] = dataArray[i] + 10;

}

