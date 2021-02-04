#include <iostream>
#include <fstream> 
#include <cstdlib>  //necessary for the constant EXIT_FAILURE
#include <string>
using namespace std;

void fileOpen(fstream&, string, char);
void generateKey(string);
int keyGen();


int main(int argc, char* argv[])
{

 int mode = atoi(argv[1]);

 if (mode == 0)
  generateKey(argv[2]);
 if (mode == 1)
  encryptFile(argv[2]);
 if (mode == 2)
  decryptFile(argv[2]);


 return 0;
}

void generateKey(string keyFile)
{
 fstream fout;
 int key = keyGen(); 
 fileOpen(fout, keyFile, 'w');
 //write the file
 fout.close();
}

int keyGen()
{
 return 1;
}

/*
Description: function opens a file 
Input: file stream object reference, name of the file, mode of open
Output: void function, but at exit, file stream object is tied to 
the input file name. 
*/ 
void fileOpen(fstream& file, string name, char mode)
//void fileOpen(fstream& file, char name[], char mode)
{
 string fileType;

 if (mode == 'r')
  fileType = "input";
 if (mode == 'w')
  fileType = "output";

 if (mode == 'r')
  file.open(name, ios::in);  //available thorugh fstream
 if (mode == 'w')
  file.open(name, ios::out);  //available through fstream;

 if (file.fail()) //error condition 
 {
  cout << "Error opening " << fileType << " file" << endl; 
  exit(EXIT_FAILURE);
 }
}
