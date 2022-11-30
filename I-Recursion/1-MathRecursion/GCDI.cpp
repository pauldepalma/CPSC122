//GCD iteratively
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
 int r = m % n;
 while (r > 0)
 {
  m = n;
  n = r;
  r = m % n; 
 }
 return n;
}  

