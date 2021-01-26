/*
Name: Paul De Palma
Class: CPSC 122
Date Submitted: January 17, 2021
Assignment: N/A 
Description: Program illustrates reading and writing lines 
*/


#include <iostream>
#include <fstream>    
#include <string>
using namespace std;

string amend(string);

int main(int argc, char* argv[])
{
 string line; 

 ifstream fin;
 ofstream fout;

 fin.open(argv[1]);
 fout.open(argv[2]);         
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

/*
Description: transforms lower case chars to upper case.
Input: a string composed of ascii chars 
Outpout: the amended string
*/
string amend(string line)
{
 for (int i = 0; i < line.length(); i++)
  if (isalpha(line[i]))
   line[i] = toupper(line[i]);
 return line;
}
