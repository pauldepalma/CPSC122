/*
Name: Paul De Palma
Class: CPSC 122-01
Date: January 9, 2022
Assignment Name: Example 7 
Description: Program illustrates arrays, random numbers, global constants 
*/

#include <iostream>
using namespace std;

#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>  // for time
#include <climits> //for INT_MIN, smallest integer value
using namespace std;

void loadArray(int[],int);
void print(int[], int);
int findLargest(int[],int);

const int LIMIT = 100;  //constant decaration

int main()
{
 int size;

 cout << "Enter an array size" << endl;
 cin >> size;
 cout << "The largest possible number generated to be generated will be " 
      << LIMIT << endl;
 cout << endl;
 cout << "Here come the random numbers " << endl;

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
 unsigned seed = time(NULL);
 srand(seed); 

 for (int i = 0; i < size; i++) 
   stuff[i] = rand() % LIMIT + 1;  //largest num will be 100. Why?

}

void print(int myStuff[], int mySize)  //parameter names can differ 
	                               //from those in calling program  
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
