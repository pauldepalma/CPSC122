//Complete


/*
Name: Paul De Palma
Class: CPSC 122
Date Submitted: February 5, 2022
Assignment: Project 4 
Description: This program implements the Substitution Cipher
*/



#include <iostream>
#include <fstream> 
#include <cstdlib>  //EXIT_FAILURE
#include <ctime>
#include <string>
using namespace std;

void fileOpen(fstream&, string, char);
void keyGenControl(string);
int keyGen();
void cipherControl(string,string,string,int);
char encrypt(char,int);
char decrypt(char,int);

int main(int argc, char* argv[])
{

 int mode = atoi(argv[1]);

 if (mode == 0)
  keyGenControl(argv[2]);

 if (mode == 1 || mode == 2)
  cipherControl(argv[2],argv[3],argv[4], mode);

 return 0;
}

/*
Description: Does file control for key generation 
Input: Name of file holding key gotten from the command line 
Output: None 
*/
void keyGenControl(string keyFile)
{
 fstream fout;
 int key = keyGen(); 

 fileOpen(fout, keyFile, 'w');
 fout << key << endl; 
 fout.close();
}

/*
Description: Randomly generates an integer in the range: [1..25] 
Input: None
Output: returns a randomly generated integer in the range [1..25]
*/
int keyGen()
{
 int key;
 unsigned seed = time(0);

 srand(seed);
 //key = rand() % 26; what's wrong with this?
 key = 1 + (rand() % 25);
 return key;
}

/*
Description: Does file control for encryption and decryption 
Input: file names are from the command line 
Output: fileOut is the encrypted or decrypted version of fileIn 
*/
void cipherControl(string keyFile, string fileIn, string fileOut, int mode)
{
 fstream keyFin, fin, fout; 
 int key;
 char ch;

 fileOpen(keyFin, keyFile, 'r');
 keyFin >> key; 
 keyFin.close();

 fileOpen(fin, fileIn, 'r');
 fileOpen(fout, fileOut, 'w');

 while(fin.peek() != EOF)
 {
  ch = fin.get();
  if (isalpha(ch))
   {
    if (mode == 1)
     {
      ch = toupper(ch);
      ch = encrypt(ch,key);
     }
    if (mode == 2)
     ch = decrypt(ch,key);
   }
  fout.put(ch); 
 } 

 fin.close();
 fout.close();
}

/*
Description: Encrypts an upper case alphabetic character using the Caesar cipher 
Input: upper case alphabetic character, valid key 
Output: encrypted version of input character 
*/
char encrypt(char ch, int key)
{
 int pos = ch - 'A';
 pos = (pos + key) % 26;
 ch = pos + 'A';
 return ch;
}

/*
Description: Decrypts an upper case alphabetic character using the Caesar cipher 
Input: upper case alphabetic character, valid key 
Output: decrypted version of input character 
*/
char decrypt(char ch, int key)
{
 int pos = ch - 'A';
 pos = (pos - key + 26) % 26;
 ch = pos + 'A';
 return ch;
}

/*
Description: function opens a file 
Input: file stream object reference, name of the file, mode of open
Output: void function, but at exit, file stream object is tied to 
the input file name. 
*/ 
void fileOpen(fstream& file, string name, char mode)
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
