#ifndef TRANS_H
#define TRANS_H
#include <fstream>
using namespace std;

class TransPos 
{
 public:
   TransPos(string inp_name_in, string out_name_in, string key_name_in, int mode); 
   TransPos(string key_name_in); 
   void store_enc_key();
   void store_dec_key();

 private:
   void enc_key_gen();
   void dec_key_gen();
   void fileOpen(fstream& keyF, string name,  char mode);

   string key_name;
   string inp_name;
   string out_name;
   fstream fkey;
   fstream fin;
   fstream fout;
   int* key_enc; 
   int mode;
   int R;
   int C;
};
#endif  
