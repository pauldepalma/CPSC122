#include <iostream>
#include <cstdlib>
using namespace std;
int fib(int);

int main(int argc, char* argv[])
{
 int f1 = 0;
 int f2 = 1;
 int f3 =  f1 + f2;
 int ct = 3;
 int n = atoi(argv[1]);
 if (ct == 1)
  cout << 0 << endl;
 if (ct == 2)
  cout << 1 << endl; 

 while (ct < n)
 {
  f3 = f1+f2;
  f1 = f2;
  f2 = f3;
  ct++;
 }
 cout << f3 << endl; 
}

