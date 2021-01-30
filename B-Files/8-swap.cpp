/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: January 17, 2021
Assignment: Example 1
Description: Program illustrates 
*/

#include <iostream>
#include <fstream>
//#include <cstdlib>
#include <string>
using namespace std;

const int SIZE = 8;  //number of lines in the input file
void fileOpen(fstream&, string, char);
void swap(string[], int, int);

int main(int argc, char* argv[])
{
 fstream fin;
 fstream fout;
 string line;
 string data[SIZE];

 if (argc != 3)
  { 
   cout << "Incorrect number of command line arguments" << endl;
   //exit(EXIT_FAILURE);
   exit(1);
  }

 fileOpen(fin, argv[1], 'r');
 fileOpen(fout, argv[2], 'w');

 for (int i = 0; i < SIZE; i++)
  getline(fin,data[i]);

 swap(data,0,1);
 
 for (int i = 0; i < SIZE; i++)
  fout << data[i] << endl;

 fin.close();
 fout.close();

 return 0;
}


//See 7-openFileError.cpp for documention
void fileOpen(fstream& file, string name, char mode)
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
Description: swaps two lines in an array of strings
Input: reference to an array of strings, two integer indices 
line indexed by idx1 is now indexed by idx2 and vice-versa
*/
void swap(string data[], int idx1, int idx2)
{
 string tmp;
 tmp = data[idx1];
 data[idx1] = data[idx2];
 data[idx2] = tmp;
}

