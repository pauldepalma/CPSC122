/*
Name: Paul De Palma
Class: CPSC 122
Date Submitted: January 17, 2021
Assignment: N/A 
Description: Program illustrates reading & writing lines 
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 char ch;
 ifstream fin;
 ofstream fout;

 fin.open("inChar.in");
 fout.open("ex5.out");

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

