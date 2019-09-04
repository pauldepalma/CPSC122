/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex6.cpp
Program illustrates parameters to main 
To Build: g++ ex6.cpp -o example6
To Execute: ./example6 project1.out hello world
*/

#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char* argv[])
{
 ofstream fout;

 if (argc != 4)
  {
   cout << "Incorrect number of command line arguments" << endl;
   exit(1);
  }
 cout << argv[2] << " " << argv[3] << endl;

 fout.open(argv[1]);
 fout << argv[2] << " " << argv[3] << endl;
 fout.close();

 return 0;

}  

 
