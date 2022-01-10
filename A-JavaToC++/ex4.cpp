
/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date: January 9, 2022
Assignment: Example 4
Description:  Program illustrates 
  void function 
  while loop
  modulus
*/


#include <iostream>
using namespace std;

void display(int, int);  //function prototype must be declared
                         //before use.  prototype includes
			 //return type, function name, parameters type(s)

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
   cout << ct << '\t';  //tab to next col 
   //line break after desired number of columns. suppose 3 cols are desired.
   //line break after displaying 2, 5, 8, 11, since each of this go in the 3rd col.
   if (ct % cols == cols - 1)  
    cout << endl;
   ct++;
  }
}
