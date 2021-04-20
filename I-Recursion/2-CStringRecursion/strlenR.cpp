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
 if (*str == '\0')
  return 0;
 return 1 + len(++str);
} 


