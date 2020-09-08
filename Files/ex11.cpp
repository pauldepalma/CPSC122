/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: Fex11.cpp
Program illusrates line file i/o, command line args  
To Build: g++ ex11.cpp -o ex11
To Execute: ./ex11 ex11.in ex11.out
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
Pre:  line is a C++ variable of type string
Post: Each lower case character in line is transformed to upper case
*/
string amend(string line)
{
 for (int i = 0; i < line.length(); i++)
  if (isalpha(line[i]))
   line[i] = toupper(line[i]);
 return line;
}
