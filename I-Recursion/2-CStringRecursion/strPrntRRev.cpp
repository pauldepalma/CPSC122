#include <iostream>
#include <stdlib.h>
using namespace std;

 
void prnt(char*);

int main(int argc, char* argv[])
{
 prnt(argv[1]);
 cout << endl;
 return 0;
}

void prnt(char* str)
{ 
 if (*str == '\0')
  return; 
 
 char ch = *str; 
 prnt(++str);
 cout << ch; 
} 


