
/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex6.cpp
Program illusrates file i/o with integers
To Build: g++ ex6.cpp -o ex6
To Execute: ./ex6 
*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{

 ifstream fin;
 ofstream fout;
 int num, total;


 fin.open("ex6A.in");
 fout.open("ex6.out");

 num = 0;
 total = 0;
 while(fin >> num)
  total = total + num;

 fout << total << endl;

 fin.close();
 fout.close(); 

 return 0;
}

