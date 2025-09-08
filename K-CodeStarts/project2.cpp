/*
Team Member 1: Paul De Palma
Course: CPSC 122
Date Submitted: 9/8/2025
Assignment Name: Project 2 
Description Program implements the Substitution Cipher
*/

#include <iostream>
#include <fstream>
using namespace std;
//Note that variable names in the next three
// statements for documentation purposes only
void keyGen(string keyFile);
char encrypt(char ch, int key);
char decrypt(char ch, int key);
void control(int mode, string keyFile, string PTfile, string PTfile);


int main(int argc, char* argv[])
{
 int mode;
 string keyFile, PTfile, CTfile;

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
   PTfile = argv[3];
   CTfile = argv[4];
   control(mode, keyFile, PtFile, CTFile); 
  }

 return 0;
}

/*
Description: Generates and stores a randomly generated integer key in the range [1..25]
Input: Name of output file
Output: none. Generated key is stored in the output file 
*/
void keyGen(string keyFile)
{
}

/*
Description; 
1 Opens keyfile and reads key 
2 Opens plaintext and ciphertext files 
3 If mode is 1: reads each character of the PTfile
  --if alpha transforms to upper case, invokes Encrypt
  --writes both non-alpha and upper case encrypted alpha to CTfile 
4 If mode is 2: reads each character of the CTfile
  --if alpha invokes Decrypt
  --writes both non-alpha and the decrypted alpha chars to PTfile
5 Closes all three files
Input: Encrypt/decrypt mode, names of key file, PTfile, CTfile 
Output: Writes encrypted/decrypted text to either CTfile or CTfile depending on mode 
*/
void control(int mode, string keyFile, string PTfile, string CTFile)
{
}


/*
Description: Encrypts a single character using  key according to the rules for 
substitution cipher encryption
Input: character to be encrypted with key
Output: returns encrypted character 
*/
char encrypt(char ch, int key)
{
}

/*
Description: Decrypts a single character using key according to the rules for 
substitution cipher encrption
Input: character to be decrypted with key
Output: returns decrypted character 
*/
char decrypt(char ch, int key)
{
}


