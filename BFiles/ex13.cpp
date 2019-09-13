/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name ex13.cpp 
Program reads an input file an array
        exchanges the first two items in the arrayy
        writes the ouput to an output file 
To Build: g++ ex13.cpp 
To Execute: ./a.out
*/


#include <iostream>
#include <fstream>    
#include <string>
using namespace std;

const int SIZE = 7;

void sort(string[]);

int main()
{
 string line; 
 string data[SIZE];
 ifstream fin;
 ofstream fout;

 fin.open("ex13.in");
 fout.open("ex13.out");

 for (int i = 0; i < SIZE; i++)         
  getline(fin,data[i]); 

 sort(data); 
 
 for (int i = 0; i < SIZE; i++)         
  fout << data[i] << endl;

 fin.close();
 fout.close(); 

 return 0;
}

void sort(string data[])
{
 string tmp;
 tmp = data[0];
 data[0] = data[1];
 data[1] = tmp; 
} 
