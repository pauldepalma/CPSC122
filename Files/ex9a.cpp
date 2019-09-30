/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: Dex9.cpp
Program illusrates file i/o with characters
To Build: g++ Dex9.cpp -o ex9
To Execute: ./ex9 
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 char ch;
 ifstream fin;
 ofstream fout;

 fin.open("ex9.in");
 fout.open("ex9.out");

 ch = fin.get();
 while(ch != EOF)
 {
  if (isalpha(ch))
   ch = toupper(ch);
  fout.put(ch); 
  ch = fin.get();
 }
 fout.put('\n'); 

 fin.close();
 fout.close(); 

 return 0;
}

