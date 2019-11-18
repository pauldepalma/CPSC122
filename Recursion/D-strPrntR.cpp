#include <iostream>
#include <stdlib.h>
using namespace std;

 
void prnt(char*);

int main(int argc, char* argv[])
{
 prnt(argv[1]);
 return 0;
}

void prnt(char* str)
{ 
 if (*str == '\0')
  cout << endl;
 else
  {
   cout << *str; 
   prnt(++str);
  } 
} 


