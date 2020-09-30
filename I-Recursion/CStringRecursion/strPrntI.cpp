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
 int i = 0;
 while (str[i] != 0)
 {
  cout << str[i];
  i++;
 }

 cout << endl;
} 


