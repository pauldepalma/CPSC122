#include <iostream>
#include <cstdlib>
using namespace std;
//F(0) = 0
//F(1) = 1 
//F(N) = F(N-2) + F(N-1) for N > 1

int fib(int);

int main(int argc, char* argv[])
{
 int nth = atoi(argv[1]);

 if (nth < 0)
  {
   cout << "The zeroth fibonacci number is 0"  << endl;
   exit(1); 
  }

 int n = fib(nth);

 if (n >= 0)
   cout << "nth fibonacci number " << n << endl;
 else
   cout << "fibonacci number " << nth << " is too large to compute" << endl; 
 return 0;
}

int fib(int nth)
{
 if (nth == 0 || nth == 1)
   return nth; 

 //0th and 1st Fibonacci number 
 int fn_minus_2 = 0;
 int fn_minus_1 = 1;
 int fn = 1;
 
 //about to generate the 3rd Fibonacci number
 int curNum = 3;
 while (curNum <= nth)
 {
  fn_minus_2 = fn_minus_1;       //advance fib-2
  fn_minus_1 = fn;               //advance fib-1
  fn = fn_minus_2 + fn_minus_1;  //advance current Fibonacci number
  curNum++; 
 }
 return fn;
}

