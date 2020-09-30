#include <iostream>
#include <stdlib.h>
using namespace std;

 
int len(char*);

int main(int argc, char* argv[])
{
 cout << len(argv[1]) << endl;
 return 0;
}

int len(char* str)
{
 int i = 0;
 while(str[i] != '\0')
  i++; 
 return i;
}

