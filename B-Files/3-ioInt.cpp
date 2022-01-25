
/*
Name: Paul De Palma
Class: CPSC 122
Date Submitted: January 17, 2021
Assignment: example 3 
Description: i/o with integers 
*/

//usage ./a.out ioInt.in iotInt.out
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
 ifstream fin;
 ofstream fout;
 int num, total;

 fin.open(argv[1]);
 fout.open(argv[2]);

 num = 0;
 total = 0;
 while(fin >> num)
  total = total + num;

 fout << total << endl;

 fin.close();
 fout.close(); 

 return 0;
}

