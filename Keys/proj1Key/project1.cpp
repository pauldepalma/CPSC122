/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date: January 22, 2022
Project 1 
Description: Generates the first n prime numbers and displays them over c columns.  Both
n and c are gotten from the command line.
*/

#include <iostream>
#include <cmath>  //for extra credit
using namespace std;

void display(int,int);
bool isPrime(int);  
void error(int);

int main(int argc, char* argv[])
{
 int numPrimes, numCols; 

 numPrimes = atoi(argv[1]);
 if (numPrimes < 1)
    error(1);

 numCols = atoi(argv[2]);
 if (numCols < 1)
    error(2);

 display(numPrimes,numCols);

 cout << endl;
 return 0;
} 


/*
Description: Loops over candidate primes, invoking isPrime on each,
displaying in column fashion those that are prime until pre-determined
number of primes is reached.
input: numPrimes, numCols, both integers indicating the number of primes to be
displayed and the number of columsn over which to display them. 
*/
void display(int numPrimes, int numCols)
{
 int ct = 0;
 int candPrime = 2; 
 while (ct < numPrimes)
 {
  if (isPrime(candPrime))
  {
   cout << candPrime;
   if (ct % numCols == numCols - 1)
    cout << endl;
   else
    cout << '\t';
   ct++;
  }
  candPrime++; 
 }
}

/*
Description: Determines whether input integer is prime
Input: integer whose primality is to be judged
Returns: true if num is prime, false otherwise
*/
bool isPrime(int num)
{
 for (int i = 2; i < num; i++)
  if (num % i == 0)
   return false;
 return true;
 
 /* 
 Extra Credit: Only need to check integers in range [2 .. floor(sqrt(n))]
 floor instead of ceil because a factor must be < sqrt(n) except when n is a perfect
 square and floor(sqrt(n)) = ceil(sqrt(n)). If n is not a perfect square, the factor is
 < sqrt(n) and the next integer down is floor(sqrt(n))
 if (num == 2)
  return true;
 int limit = ceil(sqrt(double(num))) + 1;
 for (int i = 2; i < limit;  i++)
  if (num % i == 0)
   return false;
 return true;
*/ 
}

void error(int code)
{
 if (code == 1)
  {
   cout <<  "Primes generated must be >= 1" << endl;
   exit(EXIT_FAILURE);
  }
 if (code == 2)
  {
   cout <<  "Columns must be >= 1" << endl;
   exit(EXIT_FAILURE);
  }
}
