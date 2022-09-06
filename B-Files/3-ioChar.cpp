/*
Name: Paul De Palma
Class: CPSC 122 01
Date Submitted: January 17, 2021
Assignment: example 3 
Description: Program illustrates reading & writing characters 
Usage: .\a.out inFile outFile
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
 char ch;
 ifstream fin;
 ofstream fout;

 fin.open(argv[1]);
 fout.open(argv[2]);

 while(fin.peek() != EOF)
 {
  ch = fin.get();
  if (isalpha(ch))
   ch = toupper(ch);
  fout.put(ch); 
 }
 fout.put('\n'); 

 fin.close();
 fout.close(); 

 return 0;
}

