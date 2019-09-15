/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex13.cpp
Program reads an inp;ut file into an array
        exchanges the first two items in the array
        writes the output to an output file 
To Build: g++ ex13.cpp
To Execute: ./ex13 ex12.in out 
*/

#include <iostream>
#include <fstream> 
#include <string>
#include <cstdlib>
using namespace std;

const int SIZE = 9;  //number of lines in the input file
void fileOpen(fstream&, char[], char);
void swap(string[], int, int);

int main(int argc, char* argv[])
{
 //notice use fstream
 fstream fin;
 fstream fout;
 string line;
 string data[SIZE];

 if (argc != 3)
  { 
   cout << "Incorrect number of command line arguments" << endl;
   exit(EXIT_FAILURE);
  }

 //argv[1] is a c-string, a sequence of characters terminated by '/0'
 fileOpen(fin, argv[1], 'r');
 fileOpen(fout, argv[2], 'w');

 for (int i = 0; i < SIZE; i++)
  getline(fin,data[i]);

 swap(data,0,1);
 
 for (int i = 0; i < SIZE; i++)
  fout << data[i] << endl;

 fin.close();
 fout.close();

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

/*
Pre:  data is an array of strings, idx1 and idx2 are indices into the array
Post: what was in positon idx1 in now in position idx2 and vice-versa
*/
void swap(string data[], int idx1, int idx2)
{
 string tmp;
 tmp = data[idx1];
 data[idx1] = data[idx2];
 data[idx2] = tmp;
}


