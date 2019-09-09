/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: Fex11.cpp
Program illusrates line file i/o  
To Build: g++ Fex11.cpp -o Fex11
To Execute: ./Fex11
*/


#include <iostream>
#include <fstream>    
#include <string>
using namespace std;

string amend(string);

int main()
{
 string line; 

 ifstream fin;
 ofstream fout;

 fin.open("Dex9.in");
 fout.open("Fex11.out");         
 while (fin.peek() != EOF)
 {
  getline(fin,line,'\n'); 
  line = amend(line);
  fout << line << endl;     //there is no putline function
 }
 fin.close();
 fout.close(); 

 return 0;
} 

string amend(string line)
{
 for (int i = 0; i < line.length(); i++)
  line[i] = toupper(line[i]);
 return line;
}
