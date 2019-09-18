
/*
Class: CPSC 122-01/02
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: proj1.cpp
Program 
  Generates prime numbers
  Organizes output into columns
  Writes output to a file whose name comes from the command line 
To Build: g++ proj1.cpp 
To Execute: ./a.out output
*/


#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

bool is_prime(int);

int main(int argc, char* argv[])
{
 if (argc !=2)
  {
   cout << "Incorrect number of command line arguments" << endl;
   exit(1);
  }
 
 int primes, cols; //number of primes, number of cols
 ofstream fout;
 fout.open(argv[1]);

 cout << "How many primes do you want to generate?" << endl; 
 cin >> primes;
 cout << "Distributed over how many columns" << endl; 
 cin >> cols;
 cout << endl << endl;

 int num_gen = 0;    //number of primes already generated
 int candidate = 2; //candidate prime

 while(num_gen < primes)
 {
  if (is_prime(candidate))
  {
   fout << candidate << '\t';      //tab to next col 
   if (num_gen % cols == cols - 1) //wrote to final col. return to col 0
    fout << endl;
   num_gen++; //num primes generated has increased by 1
  }
  candidate++; //try the next candidate prime
 }

 fout << endl;
 fout.close();
 cout << endl;

 return 0;
} 

/*
Pre: num is an integer
Post: returns true if num is prime, false otherwise
*/
bool is_prime(int num)
{
 for (int i = 2; i < num; i++)
  if (num % i == 0)  //i divides num. num is not prime
   return false;
 return true; //tried all possibilities.  num is prime
}

