
/*
Class: CPSC 122
Section: 01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex21.cpp
Program illustrates function templates with binary search 
To Build: g++ ex21.cpp
To Execute: ./a.out size target
where size is the size of an array, target is the search target
*/

#include <iostream>
using namespace std;

template<class T>
int binS(T*,int,T); 

int main(int argc, char* argv[])
{
 int size = atoi(argv[1]); 
 
 
  int target = 37; 
  int* arr = new int[size]; //dynamic declaration of array
  for (int i = 0; i < size; i++)
    arr[i] = i + 1; 
/*
 
 double target = 37.5; 
 double* arr = new double[size]; //dynamic declaration of array
 for (int i = 0; i < size; i++)
   arr[i] = static_cast<double>(i) + 1.5; 
 */ 
/*
  char target = 'C'; 
  char* arr = new char[size]; //dynamic declaration of array
  for (int i = 0; i < size; i++)
    arr[i] = static_cast<char>(i + 65); 
 
 */ 
 int found = binS(arr,size,target);

 if (found == -1)
   cout << "not found" << endl;
 else
   cout << "found at " << found << endl;

 return 0;
}

template<class T>
int binS(T* arr, int size, T target)
{
 int top, middle, bottom;
 top = middle = 0;
 bottom = size - 1;

 while(top <= bottom)
 {
  middle = (top + bottom) / 2;
  
  if (arr[middle] == target)  //found
     return middle;
  if (target < arr[middle])   //discard bottom half
     bottom = middle - 1;
  else
     top = middle + 1;        //discard top half
 }

 return -1;                   //not found
}
