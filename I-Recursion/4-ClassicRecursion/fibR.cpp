#include <iostream>
#include <cstdlib>
using namespace std;
//F(0) = F(1) = 1
//F(N) = F(N-2) + F(N-1) for N > 1
int fib(int);
int count = 0;
int main(int argc, char* argv[])
{
 int num = atoi(argv[1]);
 cout << "fib num " << fib(num) << endl;
 cout << "calls " << count << endl;
 return 0;
}

int fib(int num)
{
 count++;
 if (num <= 1)
    return 1;
 return (fib(num-2) + fib(num-1));
}
