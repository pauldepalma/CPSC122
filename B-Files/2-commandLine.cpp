/*
Name: Paul De Palma
Class: CPSC 122
Date Submitted: January 17, 2021
Assignment: N/A 
Description: Program illustrates numerical command line arguments 
*/

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
 int num1 = atoi(argv[1]);  //change a c-string to an integer
 int num2 = atoi(argv[2]);  //change a c-string to an integer
 string str3 = argv[3];
 cout << argv[0] << endl;
 cout << num1 * 10 << endl;
 cout << num2 << endl;
 cout << str3 << endl;
 cout << argc << endl;
}

