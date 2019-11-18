#include <iostream>
#include <stdlib.h>
using namespace std;

 
int power(int,int);

int main(int argc, char* argv[])
{
 int base = atoi(argv[1]);
 int exp = atoi(argv[2]);

 cout << power(base,exp) << endl;
 return 0;
}

int power(int base, int exp)
{
 int acc = 1;
 if (exp == 0)
   return 1;

 while (exp > 0)
 {
  acc = acc * base;
  exp--;
 }
 return acc; 
}  

