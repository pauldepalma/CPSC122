/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex7.cpp
Program is a first look at command line arguments 
To Build: g++ ex7.cpp -o ex7
Sample Execution: ./ex7 1 2 3 4 5 
*/

#include <iostream>
using namespace std;

//argc holds the number of command line arguments
//argv is an array of the arguments

int main(int argc, char* argv[])
{
 cout << endl;

 cout << "Total Number Command Line Arguments: " << argc << endl << endl;
 for (int i = 0; i < argc; i++)
   cout << "Argument " << i << ": " << argv[i] << endl;

 return 0;

}  

 
