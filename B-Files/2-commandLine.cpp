/*
Name: Paul De Palma
Class: CPSC 122
Date Submitted: January 17, 2021
Assignment: example 2 
Description: Program illustrates numerical command line arguments 
*/

#include <iostream>
using namespace std;
//usage ./a.out 2 3 "These are the days"
int main(int argc, char* argv[])
{
 int num1 = atoi(argv[1]);  //change a c-string to an integer
 int num2 = atoi(argv[2]);  //change a c-string to an integer
 string str3 = argv[3];
 cout << "Number of command line arguments: "  << argc << endl << endl;
 cout << "Arg 0: " << argv[0] << endl << endl;
 cout << "1st arg times 2nd = " << num1 * num2 << endl << endl;
 cout << "4th argument is a string: " << str3 << endl;
}

