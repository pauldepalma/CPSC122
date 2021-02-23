
/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 18, 2021
Assignment: N/A 
Description: Program illustrates dynamic declaration of 2-D arrays 
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
