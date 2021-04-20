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

int fib(int n)
{
 if (n < 2)
  return n;

 int f2 = 0;
 int f1 = 1;
 int fn;

 for (int i = n; i > 1; i--)
  {
   fn = f2 + f1;
   f2 = f1;
   f1 = fn;
  }
 return fn;

}
