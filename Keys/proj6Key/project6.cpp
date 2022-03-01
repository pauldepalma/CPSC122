/*
Name: Paul De Palma
Class: CPSC 122
Date Submitted: February 20, 2021
Assignment: Project 6  
Description: This program implements the tranposition cipher 
*/

#include <iostream>
#include <fstream> 
#include <cstdlib>  
#include <ctime>
#include <string>
using namespace std;

void fileOpen(fstream&, string, char);
void keyGen(string);
void encKeyGen(int []);
void decKeyGen(int [],int[]);
void fileControl(string,string,string,int);
char transform(char,int[]);
void sort(int arr[][2]);
bool sink(int[][2]);
void shift(int[][2], int);

const int ALPH = 26;

int main(int argc, char* argv[])
{

 int mode = atoi(argv[1]);

 if (mode == 0)
  keyGen(argv[2]);

 if (mode == 1 || mode == 2)
  fileControl(argv[2],argv[3],argv[4], mode);

 return 0;
}


void keyGen(string keyFile)
{
  fstream fout;
  int key_enc[ALPH];
  int key_dec[ALPH];

  //generate keys
  encKeyGen(key_enc);
  decKeyGen(key_enc,key_dec);
  
  //write keys to key file
  fileOpen(fout, keyFile, 'w');

  //write out the encryption key
  for (int i = 0; i < ALPH; i++)
    fout << key_enc[i] << endl;

  //write out the decryption key
  for (int i = 0; i < ALPH; i++)
    fout << key_dec[i] << endl;

  fout.close();
}

/*
Description: Generates a permuted alphabet to use as the encryption key
Input: Reference to array which hold the generated key
Output: Permuted alphabet stored in key_enc, the encryption array
*/
void encKeyGen(int key_enc[])
{
  unsigned seed = time(NULL);
  bool validate[ALPH] = {false};
  int pos = 0;

  srand(seed);
  while (pos < ALPH)
  {
    while(true)
    {
      int k = rand() % ALPH;
      if (!validate[k])
        {
          key_enc[pos] = k;
          validate[k] = true;
          pos++;
          break;
        }
     }
   }
}

/*
Description: Generates the inverse of the encryption key 
Input: array containing encryption key 
Output: array containing decryption key 
*/
void decKeyGen(int key_enc[], int key_dec[])
{
 int arr[ALPH][2];
 
 //write positional alphabet to column 0 
 //copy encryption array to column 1 
 for (int i = 0; i < ALPH; i++)
  {
   arr[i][0] = i;
   arr[i][1] = key_enc[i];
  }

 //sort sortArray on column 1
 //at the end the decryption key will be in column 0
 sort(arr); 

 //copy decryption key from 2-D array to decryption array
 for (int i = 0; i < ALPH; i++)
   key_dec[i] = arr[i][0];
}


void fileControl(string keyFile, string fileIn, string fileOut, int mode)
{
 fstream keyFin, fin, fout; 
 int key_enc[ALPH];
 int key_dec[ALPH];

 //Read in key files
 fileOpen(keyFin, keyFile, 'r');

 for (int i = 0; i < ALPH; i++)
  keyFin >> key_enc[i]; 
 for (int i = 0; i < ALPH; i++)
  keyFin >> key_dec[i]; 

 keyFin.close();

 fileOpen(fin, fileIn, 'r');
 fileOpen(fout, fileOut, 'w');

 char ch;
 while(fin.peek() != EOF)
 {
  ch = fin.get();
  if (isalpha(ch))
   {
    if (mode == 1)
     {
      ch = toupper(ch);
      ch = transform(ch,key_enc);
     }
    if (mode == 2)
     ch = transform(ch,key_dec);
   }
  fout.put(ch); 
 } 

 fin.close();
 fout.close();
}

char transform(char ch, int encDec[])
{
 int pos = ch - 'A';
 pos = encDec[pos];
 ch = pos + 'A';
 return ch;
}

void fileOpen(fstream& file, string name, char mode)
{
 string fileType;

 if (mode == 'r')
  fileType = "input";
 if (mode == 'w')
  fileType = "output";

 if (mode == 'r')
  file.open(name, ios::in);  //available through fstream
 else
  if (mode == 'w')
   file.open(name, ios::out);  //available through fstream;

 if (file.fail()) //error condition 
 {
  cout << "Error opening " << fileType << " file" << endl; 
  exit(EXIT_FAILURE);
 }
}

void sort(int arr[][2])
{
 bool shifts = true;

 while(shifts)
   shifts = sink(arr);
}

/*
Description: Adaptation of bubble sort to a 2-D array.  Sorts on column 1 
Input: 2-D array with encryption key in column 1 
Output: 2-D arry with decryption key in column 0 
*/

bool sink(int arr[][2])
{
 int cur = 0;
 bool shifts = false;
 while (cur < ALPH - 1)
 {
  if (arr[cur][1] >  arr[cur+1][1])  
  {
   shift(arr,cur);
   shifts = true;
  }
  cur++;
 }
 return shifts;
}

void shift(int arr[][2], int cur)
{
 int tmp[1][2];
 tmp[0][0] = arr[cur][0];
 tmp[0][1] = arr[cur][1];

 arr[cur][0] = arr[cur+1][0];
 arr[cur][1] = arr[cur+1][1];

 arr[cur+1][0] = tmp[0][0];
 arr[cur+1][1] = tmp[0][1];

}
