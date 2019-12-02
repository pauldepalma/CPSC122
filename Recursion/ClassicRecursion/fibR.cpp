#include <iostream>
#include <cstdlib>
using namespace std;

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
 if (num == 1 || num == 2)
    return 1;
 return (fib(num-2) + fib(num-1));
}
