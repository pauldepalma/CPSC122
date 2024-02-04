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

 if (argc != 2 || argc != 4)
  {
    cout << "Incorrect number of command line arguments" << endl;
    exit(1);
  }

 if (argc == 2 || argc == 4)
  {
    mode = atoi(argv[1]);
    keyFile = argv[2];
  }
 
 if (argc == 4)
  {
   input = argv[3];
   output = argv[4];
  }

 if (mode == 0)
   keyGen(keyFile);

 if (mode == 1 or mode == 2)
   control(mode, keyFile, input, output); 
 
 return 0;
}

/* 
--open file
--generate and write key
--close file
*/
void keyGen(string keyFile)
{}

/*
--open files
--read key
--loop over input, encrypting/decryptng,  then writing to output
*/
void control(int mode, string keyFile, string input, string output)
{}

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


