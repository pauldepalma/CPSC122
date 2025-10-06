/*
Team Member 1: Paul De Palma
Course: CPSC 122
Date Submitted: 9/27/2025
Assignment Name: Project 3
Description Program implements the Affine Cipher
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Note that variable names in the next three statements are documentation purposes only
void keyGen(string keyFile);
char encrypt(char ch, int alpha, int beta);
char decrypt(char ch, int alpha, int beta, int MI[]);
void control(int mode, string keyFile, string input, string output);

const int MODMULT = 676;


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
 
 if (mode < 0 || mode > 2) 
 {
    cout << "Invalid mode" << endl;
    exit(1);
 }

 keyFile = argv[2];
 
 if (argc == 3)
   keyGen(keyFile);

 if (argc == 5)
  {
   input = argv[3];
   output = argv[4];
   control(mode, keyFile, input, output); 
  }
  
  return 0;

}

/*
Description: Generates and stores alpha and beta values.
Input: Name of output file
Output: none. Generated keys are stored in the output file 
*/
void keyGen(string keyFile)
{
 ofstream fout;
 fout.open(keyFile);

 //Set seed for PRNG
 srand(time(0));
 //integers in [1..25] with multiplicative inverses
 int legalAlpha[12] = {1,3,5,7,9,11,15,17,19,21,23,25};
 
 int alpha = legalAlpha[rand() % 12];  //select from legalAlpha
 int beta = rand() % 25 + 1; //generate integer in range 1 .. 25
 
 fout << alpha << endl << beta;
 fout.close();
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
Input: Encrypt/decrypt mode, name of key file, input, and output files
Output: Writes encrypted/decrypted text to output file
*/
void control(int mode, string keyFile, string input, string output)
{
 //multiplicative integers mod 26.  alpha is an index into the array
 int MI[26] = {0,1,0,9,0,21,0,15,0,3,0,19,0,0,0,7,0,23,0,11,0,5,0,17,0,25};
 int alpha, beta;
 ifstream keys;
 keys.open(keyFile);
 keys >> alpha >> beta;
 keys.close();

 ifstream fin;
 ofstream fout;
 fin.open(input);
 fout.open(output);

 while(fin.peek() != EOF)
 {
  char ch = fin.get();
  if (isalpha(ch))
  {
   if (mode == 1)
     ch = encrypt(toupper(ch),alpha,beta);
   if (mode == 2)
     ch = decrypt(ch,alpha,beta,MI);
  }
  fout.put(ch);
 }

 fin.close();
 fout.close();
}
/*
Description: Encrypts a single character with key according to the rules for affine cipher
             encryption
Input: character to be encrypted with key
Output: returns encrypted character 
*/
char encrypt(char ch, int alpha, int beta)
{
 int pos = ch - 'A';
 pos = (pos * alpha + beta) % 26;
 ch = pos + 'A';
 return ch;
}

/*
Description: Decrypts a single character with key according to the rules for affine cipher
             decryption
Input: character to be decrypted with key
Output: returns decrypted character 
*/
char decrypt(char ch, int alpha, int beta, int MI[])
{
 int pos = ch - 'A';
 int alphaInv = MI[alpha];
 pos = (alphaInv * pos -  alphaInv * beta + MODMULT) % 26; //26 * 26 to prevent negatives
 ch = pos + 'A';
 return ch;
}


