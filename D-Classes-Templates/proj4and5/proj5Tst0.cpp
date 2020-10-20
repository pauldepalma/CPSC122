#include <iostream>
using namespace std;

#include "proj5.h"

int main(int argc, char* argv[])
{
 TransPos mathew(argv[1]);
 mathew.store_enc_key();
 mathew.store_dec_key();
}
