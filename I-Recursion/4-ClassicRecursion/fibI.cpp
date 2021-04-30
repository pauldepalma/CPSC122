#include <iostream>
#include <cstdlib>
using namespace std;
//F(0) = F(1) = 1
//F(N) = F(N-2) + F(N-1) for N > 1

int fib(int);

int main(int argc, char* argv[])
{
 int nth_in = atoi(argv[1]);

 if (nth_in < 0)
  {
   cout << "The zeroth fibonacci number is 1"  << endl;
   exit(1);
  }

 int nth = fib(nth_in);

 if (nth >= 0)
   cout << "nth fibonacci number " << nth << endl;
 else
   cout << "fibonacci number " << nth_in << " is too large to compute" << endl; 
 return 0;
}

int fib(int nth)
{
 if (nth == 0 || nth == 1)
   return 1; 

 int fn = 0;
 //0th and 1st Fibonacci number 
 int fn_minus_2 = 1;
 int fn_minus_1 = 1;
 while (nth > 1)
 {
  fn = fn_minus_2 + fn_minus_1;  //2nd ... nth Fibonacci numbers
  fn_minus_2 = fn_minus_1;       //advance fib-2
  fn_minus_1 = fn;               //advance fib-1
  --nth; 
 }
 return fn;
}

