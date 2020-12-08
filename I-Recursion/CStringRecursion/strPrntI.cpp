#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

 
void prnt(char*);

int main(int argc, char* argv[])
{
 prnt(argv[1]);
 return 0;
}

void prnt(char* str)
{
 while (str[i] != 0)
 {
  cout << str[i];
  i++;
 }
 cout << endl;
} 

