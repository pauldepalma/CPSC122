
/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: Eex10.cpp
Program illusrates file i/o with integers
To Build: g++ Eex10.cpp -o ex10
To Execute: ./ex10
*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{

 ifstream fin;
 ofstream fout;
 int num, total;


 //fin.open("Eex10.in");
 fin.open("Eex10A.in");
 fout.open("Eex10.out");

 num = 0;
 total = 0;
 while(fin >> num)
  total = total + num;

 fout << total << endl;

 fin.close();
 fout.close(); 

 return 0;
}

