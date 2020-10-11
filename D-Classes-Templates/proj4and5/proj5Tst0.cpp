#include <iostream>
using namespace std;

#include "proj5.h"

int main(int argc, char* argv[])
{
 TransPos transpose(argv[1]);
 transpose.store_enc_key();
 transpose.store_dec_key();
}
