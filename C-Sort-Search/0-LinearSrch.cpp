/*
Name: Paul De Palma
Class: CPSC 122
Date: 9/9/2022
Assignment Name: Example 0 
Description: Program illustrates linear search 
*/

#include <iostream>
using namespace std;

#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>  // for time
#include <climits> //for INT_MIN
using namespace std;

//int* is an address. I'll explain in detail soon
void loadArray(int*,int);
void print(int*, int);
int findLargest(int*,int);

const int LIMIT = 100;  

int main(int argc, char* argv[])
{

 int size = atoi(argv[1]);
 cout << endl;
 //We'll see lots of this later on.  For now take my word: stuff is an 
 //integer array holding "size" integers.
 int* stuff = new int[size];

 loadArray(stuff,size);
 print(stuff,size);

 cout << endl;
 cout << "Here's the largest random number generated" << endl;

 cout << findLargest(stuff,size) << endl;


 return 0;  
}

void loadArray(int* stuff, int size)
{
 unsigned seed = time(NULL);
 srand(seed); 

 for (int i = 0; i < size; i++) 
   stuff[i] = rand() % LIMIT + 1;  // integers in range [1..LIMIT]
}

void print(int* myStuff, int mySize)  //parameter names can differ 
	                               //from those in calling program  
{
 for (int i = 0; i < mySize; i++)
   cout << myStuff[i] << endl;  //braces not necessary for a single statement
}

//This algorithm is called linear search
//It traverses the array looking for the largest number;
int findLargest(int* stuff,int size)
{
 int largest = INT_MIN;  //least possible integer value 
 int idx = 0;

 while (idx < size)
 {
  if (stuff[idx] > largest) 
    largest = stuff[idx];
  ++idx;
 }
 
 return largest;
}
