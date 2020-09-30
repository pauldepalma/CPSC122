/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex14.cpp
Program demonstrates that -x % n == -x + n % n
Requires 2 command line arguments: x, an integer, n an integer > 0
To Build: g++ ex14.cpp
To Execute: ./a.out x n 
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



