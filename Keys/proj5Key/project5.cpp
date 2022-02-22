/*
Name: Paul De Palma
Class: CPSC 122
Date Submitted: February 5, 2022
Assignment: Project 5 
Description: This program implements the affine cipher 
*/



#include <iostream>
#include <fstream> 
#include <cstdlib>  
#include <ctime>
#include <string>
using namespace std;

void fileOpen(fstream&, string, char);
void keyGen(string);
void fileControl(string,string,string,int);
char encrypt(char,int,int);
char decrypt(char,int,int,int[]);

int main(int argc, char* argv[])
{

 int mode = atoi(argv[1]);

 if (mode == 0)
  keyGen(argv[2]);

 if (mode == 1)
  fileControl(argv[2],argv[3],argv[4], mode);

 if (mode == 2)
  fileControl(argv[2],argv[3],argv[4], mode);

 return 0;
}

/*
Description: Randomly generates and stores alpha and beta values.  The alpha value is
randomly drawn from the set: {1,3,5,7,9,11,15,17,19,23,25}. The beta value is randomly
drawn from the range: [1..25].
Input: Name of file that stores the keys 
Output: alpha and beta values on subsequent lines of keyFile 
*/
void keyGen(string keyFile)
{
 fstream fout;
 int alpha, idx, beta;
 unsigned seed = time(NULL);
 int validMI[12] = {1,3,5,7,9,11,15,17,19,21,23,25};


 fileOpen(fout, keyFile, 'w');
 
 srand(seed);
 beta = 1 + (rand() % 25);
 idx = rand() % 12;
 alpha = validMI[idx]; //randomly choose a multiplicative inverse 

 fout << alpha << endl; 
 fout << beta << endl; 
 fout.close();
}


/*
Description: Does file control for encryption and decryption 
Input: file names are from the command line 
Output: fileOut is the encrypted or decrypted version of fileIn 
*/
void fileControl(string keyFile, string fileIn, string fileOut, int mode)
{
 fstream keyFin, fin, fout; 
 int alpha, beta; 
 char ch;
 //dictionary of multiplicative inverses mod 26
 int MI[26] = {0,1,0,9,0,21,0,15,0,0,0,19,0,0,0,7,0,23,0,11,0,5,0,17,0};

 //read stored alpha and beta values
 fileOpen(keyFin, keyFile, 'r');
 keyFin >> alpha;
 keyFin >> beta; 
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
      ch = encrypt(ch,alpha,beta);
     }
    if (mode == 2)
     ch = decrypt(ch,alpha,beta,MI);
   }
  fout.put(ch); 
 } 

 fin.close();
 fout.close();
}

/*
Description: Encrypts an upper case alphabetic character using the affine cipher 
Input: upper case alphabetic character, valid alpha and beta values 
Output: encrypted version of input character 
*/
char encrypt(char ch, int alpha, int beta)
{
 int pos = ch - 'A';
 pos = (pos*alpha + beta) % 26;
 ch = pos + 'A';
 return ch;
}

/*
Description: Decrypts an upper case alphabetic character using the affine cipher 
Input: upper case alphabetic character, valid alpha and beta values. Dictionary
of multiplicative inverses mod 26
Output: decrypted version of input character 
*/
char decrypt(char ch, int alpha, int beta, int MI[])
{
 int alphaInv = MI[alpha];
 int pos = ch - 'A';
 //25 * 26 = 650, more than offsetting the largest possible negative value of 23*25 
 pos = (alphaInv*pos - alphaInv*beta + 650) % 26;
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
