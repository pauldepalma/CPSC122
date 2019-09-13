
/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex7.cpp
Illustrates accepting an output file name from the command line
Opening the file
Writing to the file 
To Build: g++ ex7.cpp -o ex7
To Execute: ./ex7  
*/


#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
 ofstream fout;  //declare an output stream. ofstream is a special case
                 //of fstream.

 fout.open(argv[1]); //link the disk address of a file to a variable

 //write the next four lines to the output file
 fout << "These are the days when birds come back"<< endl; 
 fout << "A very few, a bird or two"<< endl; 
 fout << "To take a backward look"<< endl; 

 fout.close(); //tell the O/S we're finished with the file 

 return 0;
}

