/*
Name: Paul De Palma
Class: CPSC 122
Date Submitted: 9/22/2022, 2022
Assignment: Project 3 
Description: This program implements the Substitution Cipher
*/

#include <iostream>
#include <fstream> 
#include <cstdlib>  //EXIT_FAILURE
#include <ctime>
#include <string>
using namespace std;

const string BLOCK = "BKfile";

void fileOpen(fstream&, string, char);
void keyGen(string);
char encrypt(char,int);
void encryptCtl(string, string); //keyFile, CTfile
void decryptCtl(string, string, string); //keyFile, CTfile, DCFile
char decrypt(char,int);
void blockCtl(string); 
bool toDiscard(char);

int main(int argc, char* argv[])
{

 int mode = atoi(argv[1]);

 if (mode == 0)
  keyGen(argv[2]);  //keyFile

 if (mode == 1)
 {
  blockCtl(argv[3]); //PTfile
  encryptCtl(argv[2], argv[4]); //keyFile CTfile
 }

 if (mode == 2)
  decryptCtl(argv[2], argv[3], argv[4]); //keyFile, CTfile, DCfile
  

 return 0;
}

/*
Description: Randomly generates an integer in the range: [1..25] 
Input: name of output file 
Output: writes randomly generated integer to the output file 
*/
void keyGen(string keyFile)
{
 fstream fout;

 fileOpen(fout, keyFile, 'w');

 unsigned seed = time(0);
 srand(seed);
 int key = 1 + (rand() % 25);

 fout << key << endl; 
 fout.close();
}

/*
Description: Transforms ciphertext to block format 
Input: name of plain text file 
Output: block text version of PTfile 
*/
void blockCtl(string PTfile)
{
 fstream fin, fout;
 fileOpen(fin, PTfile, 'r');
 fileOpen(fout, BLOCK, 'w');

 int ct = 0;
 while(fin.peek() != EOF)
 {
  char ch = fin.get();
  if (!toDiscard(ch))
  {
   if (isalpha(ch))
    ch = toupper(ch);
   fout.put(toupper(ch));
   ct++;
   if (ct % 50 == 0) 
    fout << endl;
  } 
 }
 fin.close();
 fout.close();
}
/*
Description: passes over white space, periods, commas  
Input: character 
Output: true if character is white space, period, or comma, false otherwise 
*/
bool toDiscard(char ch)
{
 if (ch == '.' || ch == ',' || ch == ' ' || ch == '\n')
  return true;
 return false;
}

/*
Description: Does file control for encryption  
Input: file names are from the command line 
Output: fileOut is the encrypted  
*/
void encryptCtl(string keyFile, string CTfile)
{
 fstream keyFin, fin, fout; 
 int key;
 char ch;

 fileOpen(keyFin, keyFile, 'r');
 keyFin >> key; 
 keyFin.close();

 fileOpen(fin, BLOCK, 'r');
 fileOpen(fout, CTfile, 'w');

 while(fin.peek() != EOF)
 {
  ch = fin.get();
  if (isalpha(ch))
    ch = encrypt(ch,key);
  fout.put(ch); 
 } 

 fin.close();
 fout.close();
}

/*
Description: Does file control for decryption  
Input: file names are from the command line 
Output: DCfile is the block text version of plain text  
*/
void decryptCtl(string keyFile, string CTfile, string DCfile)
{
 fstream keyFin, fin, fout; 
 int key;
 char ch;

 fileOpen(keyFin, keyFile, 'r');
 keyFin >> key; 
 keyFin.close();

 fileOpen(fin, CTfile, 'r');
 fileOpen(fout, DCfile, 'w');

 while(fin.peek() != EOF)
 {
  ch = fin.get();
  if (isalpha(ch))
    ch = encrypt(ch,key);
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
