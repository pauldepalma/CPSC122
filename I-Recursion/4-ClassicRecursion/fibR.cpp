#include <iostream>
#include <cstdlib>
using namespace std;
//F(0) = 0
//F(1) = 1
//F(N) = F(N-2) + F(N-1) for N > 1
int fib(int);
int main(int argc, char* argv[])
{
 int num = atoi(argv[1]);
 cout << fib(num) << endl;
 return 0;
}

int fib(int num)
{
 if (num == 0) 
  return 0;  
 if (num == 1) 
  return 1;  
 return (fib(num-2) + fib(num-1));
}
