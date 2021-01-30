/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: January 17, 2021
Assignment: Example 1
Description: Program illustrates console output
Program illusrates:
  trapping for file open errors
  passing argv elements to functions
  passing file stream objects to functions
  requires that the user enter and input and output file at the command line
*/

#include <iostream>
#include <fstream> 
#include <cstdlib>  //necessary for the constant EXIT_FAILURE
#include <string>
using namespace std;

void fileOpen(fstream&, string, char);

void readWrite(fstream&,fstream&);

int main(int argc, char* argv[])
{
 fstream fin;
 fstream fout;

 if (argc != 3)
  { 
   cout << "Incorrect number of command line arguments" << endl;
   exit(EXIT_FAILURE);
  }

 //argv[1] is a c-string, a sequence of characters terminated by '/0'
 //here it is being transformed to a string
 fileOpen(fin, argv[1], 'r');
 fileOpen(fout, argv[2], 'w');


 readWrite(fin,fout);

 fin.close(); 
 fout.close(); 

 return 0;
}

/*
Description: reads and writes a line at time from an input file to an output file 
Input: file stream object references
Output: output file with the contents of an input file 
*/ 
void readWrite(fstream& fin, fstream& fout)
{
 string line;
 while (fin.peek() != EOF)
 {
   getline(fin,line, '\n'); //'\n is the default delimiter and not read in 
   fout << line << endl;  
 }
}


/*
Description: function opens a file 
Input: file stream object reference, name of the file, mode of open
Output: void function, but at exit, file stream object is tied to 
the input file name. 
*/ 
void fileOpen(fstream& file, string name, char mode)
//void fileOpen(fstream& file, char name[], char mode)
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
