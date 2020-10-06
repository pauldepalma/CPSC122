/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex16.cpp
Demonstrates selection sort with a 2D array
Requires length of array as command line argument 
To Build: g++ ex16.cpp
To Execute: ./a.out length 
*/

#include <iostream>
using namespace std;

void swap(int stuff[][2],int,int);

int main()
{
 int stuff[5][2];

 for (int i = 0; i < 5; i++)
   {
     stuff[i][0] = i;
     stuff[i][1] = 4 - i;
   }

 for (int i = 0; i < 5; i++)
     cout << stuff[i][0] << " " << stuff[i][1] << endl;

 swap(stuff, 0, 4);
 cout << endl;
      
 for (int i = 0; i < 5; i++)
     cout << stuff[i][0] << " " << stuff[i][1] << endl;


 return 0;
}

void swap(int stuff[][2], int frst, int lst)
{
 int tmp[1][2];

 tmp[0][0] = stuff[0][0];
 tmp[0][1] = stuff[0][1];

 stuff[0][0] = stuff[4][0];
 stuff[0][1] = stuff[4][1];

 stuff[4][0] = tmp[0][0];
 stuff[4][1] = tmp[0][1];
}
