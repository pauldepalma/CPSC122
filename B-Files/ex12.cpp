/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex12.cpp
Program illusrates:
  trapping for file open errors
  passing argv elements to functions
  passing file stream objects to functions  
To Build: g++ ex12.cpp
To Execute: ./ex12 ex9.in out //correct input
To Execute: ./ex12           //incorrect number of command line args
To Execute: ./ex12 hello.world //non-existent input file
*/

#include <iostream>
#include <fstream> 
#include <cstdlib>  //necessary for the constant EXIT_FAILURE
#include <string>
using namespace std;

void fileOpen(fstream&, char[], char);

int main(int argc, char* argv[])
{
 //notice use fstream
 fstream fin;
 fstream fout;
 string line;

 if (argc != 3)
  { 
   cout << "Incorrect number of command line arguments" << endl;
   exit(EXIT_FAILURE);
  }

 //argv[1] is a c-string, a sequence of characters terminated by '/0'
 fileOpen(fin, argv[1], 'r');
 fileOpen(fout, argv[2], 'w');

 while (fin.peek() != EOF)
 {
   getline(fin,line, '\n'); 
   fout << line << endl; //'\n' is the default delimiter and not read in. 
 }

 fin.close(); 
 fout.close(); 

 return 0;
}

/*
Pre:  file is a reference to an fstream object
      name of the physical name of a file
      mode is 'r' for input and 'w' for output
Post: file is opened, displays error and halts if error is encountered
*/ 
void fileOpen(fstream& file, char name[], char mode)
{
 string fileType;

 if (mode == 'r')
  fileType = "input";
 if (mode == 'w')
  fileType = "output";

 if (mode == 'r')
  file.open(name, ios::in);  //available thorugh fstream
 if (mode == 'w')
  file.open(name, ios::out);  //available through fstream;

 if (file.fail()) //error condition 
 {
  cout << "Error opening " << fileType << " file" << endl; 
  exit(EXIT_FAILURE);
 }
}
