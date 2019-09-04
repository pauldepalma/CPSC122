/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex8.cpp
Program illusrates line file i/o  
To Build: g++ ex8.cpp -o ex8
To Execute: ./ex8 
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

 fin.open("ex7.in");
 fout.open("ex8.out");         
 int ct = 0;
 while (fin.peek() != EOF)
 {
  getline(fin,line,'\n'); 
  line = amend(line);
  fout << line << endl;     //there is no putline function
  ct++;
 }
 cout << ct << endl;
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
