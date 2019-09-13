/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: Gex12.cpp
Program illusrates:
  trapping for file open errors
  passing argv elements to functions
  passing file stream objects to functions  
To Build: g++ ex12.cpp -o ex12
To Execute: ./ex12 ex9.in  //correct input
To Execute: ./ex12          //incorrect number of command line args
To Execute: ./ex12 hello.world //non-existent input file
*/

#include <iostream>
#include <fstream> 
#include <cstdlib>  //necessary for the constant EXIT_FAILURE
using namespace std;

void gfIopen(string, ifstream&);

int main(int argc, char* argv[])
{
 string line;
 ifstream fin;

 if (argc != 2)
  { 
   cout << "Incorrect number of command line arguments" << endl;
   exit(EXIT_FAILURE);
  }

 gfIopen(argv[1],fin); //file name is a command line argument 

 while (fin.peek() != EOF)
  {
   getline(fin,line, '\n'); 
   cout << line << endl; //'\n' is the default delimiter and not read in. 
  }

 fin.close(); 

 return 0;
}

/*
Pre:   fileName holds the value stored in argv[1]. 
       fin is an input file stream object.  File stream objects may be
       passed by reference to functions.
Post:  opens an existing file, displays an error and halts if the file
       does not exist
*/
//void gfIopen(char fileName[],ifstream& fin)
void gfIopen(string fileName,ifstream& fin)
{
 fin.open(fileName);

 if (!fin) //error condition 
 {
  cout << "Error opening input file " << endl;
  exit(EXIT_FAILURE);
 }
}
