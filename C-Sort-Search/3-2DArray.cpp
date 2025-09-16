/*
Class: CPSC 122, Section 1
Date Submitted: September 15, 2025
Assignment: N/A 
Description: Program illustrates manipulating a 2-D array. 
*/


#include <iostream>
using namespace std;

const int LIMIT = 100;
const int ROWS = 5;
const int COLS = 5;

void swap(int stuff [ROWS][COLS], int rowA, int rowB);
void load(int stuff [ROWS][COLS]);
void display(int stuff [ROWS][COLS]);

int main(int argc, char* argv[])
{
 int stuff[ROWS][COLS];

 load(stuff);
 display(stuff);
 cout << endl;
 swap(stuff,0,4);
 display(stuff);
 
 return 0;
}

void load(int stuff[ROWS][COLS])
{
   unsigned seed = time(0);
   srand(seed);
   
   for (int k = 0; k < ROWS; k++)
      for (int l = 0; l < COLS; l++)
         stuff[k][l] = rand() % (LIMIT + 1);
}


void display(int stuff[ROWS][COLS])
{
 int k = 0;
 int l = 0;
 for (k = 0; k < ROWS; k++)
 {
   for (l = 0; l < COLS; l++)
      cout << stuff[k][l] << '\t';
   if (l % COLS == 0)
      cout << endl;
 }
}

//beginnings of swap
void swap(int stuff[ROWS][COLS], int rowA, int rowB)
{
 int *rA = stuff[rowA];
 int *rB = stuff[rowB];
 for (int i = 0; i < COLS; i++)
 {
   int temp = rA[i];
   rA[i] = rB[i];
   rB[i] = temp;
 }
}

