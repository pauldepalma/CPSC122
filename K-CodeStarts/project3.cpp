/*
Team Member 1: Paul De Palma
Course: CPSC 122
Date Submitted: 2/10/2024
Assignment Name: Project 3
Description Program implements the Caesar Cipher
*/

#include <iostream>
#include <fstream>
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
}

/*
Description; 
1 Opens keyfile and reads key 
2 Opens plaintext and ciphertext files 
3 Reads each character of the plaintext file 
4 If mode is 1 and the character is alphabetic, transforms it to upper case, encrypts it and writes it
  to the output file 
5 If mode is 2 and the character is alphabetic, decrypts it and writes it to output file
6 If the character is not alphabetic, writes it to the output file
7 Closes all three files
Input: Encrypt/decrypt mode, namkes of key file, input, and output files
Output: Writes encrypted/decrypted text to output file
*/
void control(int mode, string keyFile, string input, string output)
{
}


/*
Description: Encrypts a single character with key according to the rules for substitution cipher
             encryption
Input: character to be encrypted with key
Output: returns encrypted character 
*/
char encrypt(char ch, int key)
{
}

/*
Description: Decrypts a single character with key according to the rules for substitution cipher
             encryption
Input: character to be decrypted with key
Output: returns decrypted character 
*/
char decrypt(char ch, int key)
{
}


