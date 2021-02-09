/*
Class: CPSC 122
Name: Paul De Palma
Date Submitted: February 3, 2021 
Program illustrates binary search, dynamic array declaration 
*/

#include <iostream>
using namespace std;
int binS(int*, int, int);


int main(int argc, char* argv[])
{
 int size = atoi(argv[1]); 
 int target = 37; 

 int* arr = new int[size]; //dynamic declaration of array

 for (int i = 0; i < size; i++)
   arr[i] = i;

 int found = binS(arr,size,target);

 if (found == -1)
   cout << "not found" << endl;
 else
   cout << "found at " << found << endl;

 return 0;
}

/*
Description: Binary search
Input: pointer to an array of integers, array size, item searched for
Output: position of the of the item if found, -1 otherwise

int binS(int* arr, int size, int target)
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

