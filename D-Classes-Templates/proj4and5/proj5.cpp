#include <iostream>
using namespace std;

#include <ctime>
#include "proj5.h"

TransPos::TransPos(string inp_name_in, string out_name_in, string key_name_in, int mode_in)
{
 cout << "entered the encrypt/decrypt constructor" << endl;
 inp_name = inp_name_in;
 out_name = out_name_in;
 key_name = key_name_in;
 mode = mode_in; 
 R = 26;
 C = 2;
}

TransPos::TransPos(string key_name_in)
{
 key_enc = new int[26];
 key_name = key_name_in;
 R = 26;
 C = 2;
}

void TransPos::store_enc_key()
{
 enc_key_gen(); 
 fileOpen(fkey,key_name,'w');
 for(int i = 0; i < R; i++)
  fkey << key_enc[i] << ' ';
 fkey << endl;
 fkey.close();
}

//generate the key
void TransPos::enc_key_gen()
{
  bool validate[R] = {false};
  unsigned seed = time(0);
  srand(seed);
  int pos = 0;

  while (pos < R)
  {
    while(true)
    {
      int k = rand() % R;
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


void TransPos::store_dec_key()
{
 fileOpen(fkey,key_name,'a');
 //storing 0 .. 25 on the second line of the key file to demonstrate appending
 //to an existing file
 for (int i = 0; i < R; i++)
  fkey << i << ' ';
 fkey << endl;
 fkey.close();
}

void TransPos::fileOpen(fstream& file, string name, char mode)
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
 if (mode == 'a')
  file.open(name, ios::app);  //available through fstream;

 if (file.fail()) //error condition 
 {
  cout << "Error opening " << fileType << " file" << endl; 
  exit(EXIT_FAILURE);
 }
}
