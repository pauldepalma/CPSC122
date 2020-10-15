/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex29.cpp
illustrates dynamic creation of a 2D array.
To Build: g++ ex29.cpp
To Execute: ./a.out  
*/

#include <iostream>
#include <cstdlib> 
using namespace std;

const int R = 5;
const int C = 2;

void load(int**);
void display(int**);

int main()
{

 int** example = new int* [R];   //declare an array of R pointers to int
 for (int i = 0; i < R; i++)     //R int arrays, each of size C 
     example[i] = new int[C];

 load(example);
 display(example); 
}
void load(int** ex)
{
  for (int i = 0; i < R; i++)
    for (int j = 0; j < C; j++)
      ex[i][j] = i; 
}

void display(int** ex)
{
  for (int i = 0; i < R; i++)
    {
      for (int j = 0; j < C; j++)
        cout << ex[i][j] << " ";
      cout << endl;
    }
}
