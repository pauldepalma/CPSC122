
/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex8.cpp
Illustrates doing arithmetic with command line arguments 
To Build: g++ ex8.cpp -o input 
To Execute: ./ex7  
*/


#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
 int num = atoi(argv[1]);  //change a c-string to an integer
 cout << num * 10 << endl;
}

