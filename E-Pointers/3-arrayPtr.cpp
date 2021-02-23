/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates arrays as pointers 
*/

#include <iostream>
#include <cstdlib> //necessary for atoi
using namespace std;

void passStuff(int*,int);     //note the pointer type

int main(int argc, char* argv[])
{
 int size = 5;
 int dataArray[size];        //a conventional integer array
 for (int i = 0; i < 5; i++)
   dataArray[i] = i; 
	 
 passStuff(dataArray,size);

 cout << "Array" << endl;
 for (int i = 0; i < size; i++)
   cout << dataArray[i] << endl;


 return 0;
}

//add 10 to each of the parameters
void passStuff(int* dataArray,int size)    //pointer notation
{
 for (int i = 0; i < 5; i++)               //array notation
   dataArray[i] = dataArray[i] + 10;

}

