#include <iostream>
#include <stdlib.h>
using namespace std;

/*
  power(base,exp) = 1                         if exp = 0
  power(base,exp) = base * power(base,exp-1)  if exp > 0
*/
 
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
 if (exp == 0)
  return 1;
 return base * power(base,exp-1);
}  

