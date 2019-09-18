/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: inClassEx2Start.cpp 
Program reads an inp;ut file into an array
        sorts the input file using selection sort 
        writes the sorted array to an output file 
To Build: g++ inClassEx2Start.cpp 
To Execute: ./a.out emily out 
*/

#include <iostream>
#include <fstream> 
#include <string>
#include <cstdlib>
using namespace std;

const int SIZE = 9;  //number of lines in the input file
void fileOpen(fstream&, char[], char);
void readData(fstream&, char[], string[]);
void writeData(fstream&, char[], string[]);
//write these three functions
void selSort(string[], int size);
int findSmallest(string[], int, int);
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
   exit(EXIT_FAILURE);
  }

 readData(fin, argv[1], data);

//call to selSort goes here

 writeData(fout, argv[2], data);

 return 0;
}

void readData(fstream& file, char fileName[], string data[])
{
 fileOpen(file, fileName, 'r');
 for (int i = 0; i < SIZE; i++)
  getline(file,data[i]);
 file.close();
}

void writeData(fstream& file, char fileName[], string data[])
{
 fileOpen(file, fileName, 'w');
 for (int i = 0; i < SIZE; i++)
   file << data[i] << endl;
 file.close();
}

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
Pre:  data is an array of strings
Post: data is in sorted order
*/
void selSort(string data[])
{
 cur = 0
 //from positon cur thorugh SIZE - 1
 //  find the smallest item in the subarray beginning with cur 
 //  swap the smallest item with the item at position cur 
}

/*
Pre:  data is an arrray of strings, cur begins the subarray under consideration
Post: returns the smallest item in the array, beginnig with cur
*/
int findSmallest(string data[], int cur)
{
 //starting with cur, find the index of the smallest item in the array
 //return the index of the smallest item in the array
}


/*
Pre:  data is an arrray of strings, cur and idxSmallest are indices 
Post: what was in postion cur is now in position idxSmallest and vice-versa 
*/
void swap(string data[], int cur, int idxSmallest)
{
}
