//GCD Recursively
//Trace gcd(103,7)

#include <iostream>
#include <stdlib.h>
using namespace std;

 
int gcd(int,int);

int main(int argc, char* argv[])
{
 int m = atoi(argv[1]);
 int n = atoi(argv[2]);

 cout << gcd(m,n) << endl;
 return 0;
}

int gcd(int m, int n)
{
 if (n == 0)
  return m;
 return gcd(n, m%n);
}  

