/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex7.cpp
Program illusrates file i/o with characters
To Build: g++ ex7.cpp -o ex7
To Execute: ./ex7 
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

 char ch;
 ifstream fin;
 ofstream fout;

 fin.open("ex7.in");
 fout.open("ex7.out");

 while(fin.peek() != EOF)
 {
  ch = fin.get();
  fout.put(toupper(ch)); 
 }
 fout.put('\n'); 

 fin.close();
 fout.close(); 

 return 0;
}

