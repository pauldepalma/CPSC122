#include <iostream>
using namespace std;

/*
   fact(n) = 1             if n = 0
   fact(n) = n * fact(n-1) if n > 0
*/

int fact(int);


int main(int argc, char* argv[])
{
 int num = atoi(argv[1]);

 cout << fact(num) << endl;
 return 0;
}

int fact(int num)
{
 if (num == 0)
   return 1;
 return num * fact(num-1);
}

