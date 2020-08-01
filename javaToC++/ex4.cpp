/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex4.cpp
Program illustrates arrays, random numbers, global constants 
To Build: g++ ex4.cpp -o example4
To Execute: ./example4
*/

#include <iostream>
using namespace std;

const int SIZE = 10;  //constant declaration
const int LIMIT = 100; 

#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>  // for time
using namespace std;

int main()
{
 unsigned seed = time(0);
 srand(seed);
 int stuff[SIZE];

 for (int i = 0; i < SIZE; i++) 
   stuff[i] = rand() % LIMIT + 1;  //largest num will be 100

 cout << "array from beginning to end" << endl;
 int i = 0;
 while (i < SIZE)
 {
  cout << stuff[i] << endl;
  i++;
 }

 cout << "array from end to beginning" << endl;
 i = SIZE - 1;
 while (i > -1)
 {
  cout << stuff[i] << endl;
  i--;
 }

 return 0;  
}

