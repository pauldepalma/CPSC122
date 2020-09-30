
/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex8.cpp
Illustrates doing arithmetic with command line arguments 
To Build: g++ ex8.cpp -o input 
To Execute: ./ex8 
*/

//csuser-> jesus 72
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

