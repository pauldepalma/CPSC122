#include <iostream>
using namespace std;

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
--open file
--generate and write key
--close file
*/
void keyGen(string keyFile)
{
 cout << "in Keygen" << endl;
}

/*
--open files
--read key
--loop over input, encrypting/decryptng,  then writing to output
*/
void control(int mode, string keyFile, string input, string output)
{
 cout << "in Control" << endl;
}

//encrypt ch and return encrypted version
char encrypt(char ch, int key)
{
 return ch;
}

//decrypt ch and return decrypted version
char decrypt(char ch, int key)
{
 return ch;
}


