#include <iostream>
#include <stdlib.h>
using namespace std;

 
int prnt(char*);

int main(int argc, char* argv[])
{
 prnt(argv[1]);
 return 0;
}

int prnt(char* str)
{ 
 if (*str == '\0')
  cout << endl;
 else
  {
   cout << *str; 
   prnt(++str);
  } 
} 


