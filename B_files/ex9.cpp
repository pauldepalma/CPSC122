/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex9.cpp
Program illusrates trapping for file open errors, command line args  
To Build: g++ ex9.cpp -o ex9
To Execute: ./ex9 
*/

#include <iostream>
#include <fstream> 
#include <cstdlib>
using namespace std;

void gfopen(char[],ifstream&);

int main(int argc, char* argv[])
{
 string line;
 ifstream fin;

 gfopen(argv[1],fin); //file name is a command line argument 

 while (fin.peek() != EOF)
  {
   getline(fin,line, '\n'); 
   cout << line << endl; //'\n' is the default delimiter and not read in. 
  }

 fin.close(); 

 return 0;
}

void gfopen(char fileName[],ifstream& fin)
{
 
 fin.open(fileName);

 if (!fin) //error condition 
 {
  cout << "Error opening input file " << endl;
  exit(EXIT_FAILURE);
 }
}
