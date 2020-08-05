/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: FArrays.cpp
Program illustrates arrays, random numbers, global constants 
To Build: g++ FArrays.cpp -o arrays 
To Execute: ./arrays
*/

#include <iostream>
using namespace std;

const int LIMIT = 100;  //constant decaration

#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>  // for time
#include <climits> //for INT_MIN, smallest integer value
using namespace std;

void loadArray(int[],int);
void print(int[], int);
int findLargest(int[],int);

int main()
{
 int size = 25; 
 int stuff[size];  //array declaration

 loadArray(stuff,size);
 print(stuff,size);

 cout << endl;
 cout << "Here's the largest random number generated" << endl;

 cout << findLargest(stuff,size) << endl;


 return 0;  
}

void loadArray(int stuff[], int size)
{
 //seed the pseudo random number generation so that 
 //subsequent runs will generate a different sequence
 unsigned seed = time(0);
 srand(seed); 

 for (int i = 0; i < size; i++) 
   stuff[i] = rand() % LIMIT + 1;  //largest num will be 100. Why?

}

void print(int myStuff[], int mySize)  //parameter names can differ from those in calling program  
{
 for (int i = 0; i < mySize; i++)
   cout << myStuff[i] << endl;  //braces not necessary for a single statement
}

//This algorithm is called linear search
//It traverses the array looking for the largest number;
int findLargest(int stuff[],int size)
{
 int largest = INT_MIN;  //system defined constant for least possible integer value 
 int idx = 0;

 while (idx < size)
 {
  if (stuff[idx] > largest) 
    largest = stuff[idx];
  ++idx;
 }
 
 return largest;
}
