/*
Team Member 1: Paul De Palma
Course: CPSC 122
Date Submitted: 9/21/2025
Assignment Name: Project 2
Description Program implements the substitution cypher 
*/

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
//Note that variable names in the next three statements for documentation purposes only
void keyGen(string keyFile);
char encrypt(char ch, int key);
char decrypt(char ch, int key);
void control(int mode, string keyFile, string input, string output);


int main(int argc, char* argv[])
{
 int mode;
 string keyFile, input, output;

 if (argc != 3 && argc != 5) 
 {
    cout << "Incorrect number of command line arguments" << endl;
    exit(1);
 }

 mode = atoi(argv[1]);
 keyFile = argv[2];
 
 if (argc == 3)
  {
   keyGen(keyFile);
   return 0; 
  }

 if (argc == 5)
  {
   input = argv[3];
   output = argv[4];
   control(mode, keyFile, input, output); 
  }

 return 0;
}

/*
Description: Generates and stores an integer key in the range [1..25]
Input: Name of output file
Output: none. Generated key is stored in the output file 
*/
void keyGen(string keyFile)
{
 unsigned seed = time(NULL);
 srand(seed);

 int key = rand() % 25 + 1;

 ofstream fout;
 fout.open(keyFile);

 fout << key;
 fout.close();
 

}

/*
Description:
if mode = 1, read keyFile retrieving key.  For each char in PtFile, if the character is
alphabetic, transform to UC, encrypt using Encrypt and return encrypted character.
write both non-alpha and encrypted chars to CTfile

if mode = 2, read keyFile retrieving key for each character in CTfile:
if alphabetic, decrypt using Decrypt, return decrypted character
write both non-alpha and decrypted characters to PTfile

*/
void control(int mode, string keyFile, string PTfile, string CTfile)
{
 ifstream finKey;
 ifstream fin;
 ofstream fout;

 finKey.open(keyFile);
 int key;
 finKey >> key;
 finKey.close();
 
 if (mode == 1)
 {
    fin.open(PTfile);
    fout.open(CTfile);
 }
 
 if (mode == 2)
 {
    fin.open(CTfile);
    fout.open(PTfile);
 }

 char ch; 
 
 while(fin.peek() != EOF)
 {
  ch = fin.get();
  if (isalpha(ch))
  {
   if (mode == 1)
    ch = encrypt(toupper(ch),key);
   if (mode == 2)
    ch = decrypt(ch,key);
  }
  fout.put(ch);
 }

 fin.close();
 fout.close();
}


/*
Description: Encrypts a single character with key according to the rules for substitution cipher
             encryption
Input: character to be encrypted with key
Output: returns encrypted character 
*/
char encrypt(char ch, int key)
{
 int pos = ch - 'A';
 pos = (pos + key) % 26;
 ch = pos + 'A';
 return ch;
}

/*
Description: Decrypts a single character with key according to the rules for substitution cipher
             encryption
Input: character to be decrypted with key
Output: returns decrypted character 
*/
char decrypt(char ch, int key)
{
 int pos = ch - 'A';
 pos = (pos - key + 26) % 26;
 ch = pos + 'A';
 return ch;
}


