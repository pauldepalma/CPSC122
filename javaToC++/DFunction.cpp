
/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: DFunction.cpp
Program illustrates
  void function 
  while loop
  modulus
To Build: g++ DFunction.cpp -o DFunction    //DFunction names executable 
To Execute: ./DFunction
*/


#include <iostream>
using namespace std;

void display(int, int);

int main()
{
 int num, col; 

 cout << "How many integers do you want to see?" << endl; 
 cin >> num;

 cout << "Distributed over how many columns" << endl; 
 cin >> col;

 display(num,col);
 cout << endl;

 return 0;
} 

void display(int nums, int cols)
{
 int ct = 0;
 int rowCt = 1;
 
 while (ct < nums)
  {
   cout << ct << '\t';         //tab to next col 
   if (ct % cols == cols - 1)  //think about this one 
    cout << endl;
   ct++;
  }
}

