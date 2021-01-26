/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: January 17, 2021
Assignment: Example 1
Description: Program demonstrates that -x % n == -x + n % n
something that will be useful in the affine cipher, which is coming up soon
Requires two command line arguments: x. an integer, n an integer > 0
*/


#include <iostream>
#include <cstdlib>
using namespace std;


int main(int argc, char* argv[])
{
 if (argc != 3)
    {
     cout << "Requires 2 arguments, x an integer, and n an intger > 0";
     return(EXIT_FAILURE); 
    }

 int x = atoi(argv[1]);
 int n = atoi(argv[2]);
 if (n <= 0)
   {
    cout << "n must be positive" << endl;
    return(EXIT_FAILURE);
   }
 
 cout << "-x % n" << endl;
 cout << -x % n << endl;
 cout << endl;

 cout << "-x + 26 % 26" << endl;
 cout << (-x + n) % n << endl;
  

 return 0;
}



