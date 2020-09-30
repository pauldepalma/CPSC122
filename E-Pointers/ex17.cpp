/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex17.cpp
array names and pointers 
To Build: g++ ex17.cpp
To Execute: ./a.out integer 
*/

#include <iostream>
#include <cstdlib> //necessary for atoi
using namespace std;

void passStuff(int[], int*, int);

int main(int argc, char* argv[])
{

 int dataArray[5];
 int dataPtr = 1;
 int data = 1;
 for (int i = 0; i < 5; i++)
   dataArray[i] = i; 
	 
 passStuff(dataArray, &dataPtr, data);

 cout << "Array" << endl;
 for (int i = 0; i < 5; i++)
   cout << dataArray[i] << endl;

 cout << "Pointer " <<  dataPtr << endl;
 cout << "data " << data << endl;

 return 0;
}

//add 10 to each of the parameters
void passStuff(int dataArray[], int* dataPtr, int data)
{
 for (int i = 0; i < 5; i++)
   dataArray[i] = dataArray[i] + 10;

 *dataPtr = *dataPtr + 10;
 data = data + 10;
}


