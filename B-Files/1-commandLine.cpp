/*
Name: Paul De Palma
Class: CPSC 122 01
Date Submitted: January 17, 2021
Assignment: example 1 
Description: Program illustrates command line arguments 
*/

#include <iostream>
using namespace std;

//argc holds the number of command line arguments
//argv is an array of the arguments
//usage: ./a.out 5
int main(int argc, char* argv[])
{

 cout << "Total Number Command Line Arguments: " << argc << endl;
 for (int i = 0; i < argc; i++)
   cout << "Argument " << i << ": " << argv[i] << endl;

 return 0;

}  

 
