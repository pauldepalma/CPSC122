#include <iostream>
#include <cstdlib>
using namespace std;


int fib(int);

int main(int argc, char* argv[0])
{
 int num = atoi(argv[1]);

 int fn = fib(num);
 cout << fn << endl;

 return 0;
}
/*
   f0 = 0
   f1 = 1
   fn = fn-2 + fn-1;
*/


int fib(int n)
{
 if (n == 0)
  return 0;
 if (n == 1)
  return 1;

 return(fib(n-2) + fib(n-1));

}
