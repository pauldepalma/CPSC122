/*
Name: Paul De Palma
Class: CPSC 12
Date Submitted: 9/19, 2025 
Assignment: N/A 
Description: illustrates using an array as a dictionary of multiplicative inverses.
            if array[k] = 0, k has no MI mod 26
	    if array[k] = m, m is the MI of k mod 26 
*/

#include <iostream>
#include <cstdlib>

int DICT[26] = {0,1,0,9,0,21,0,15,0,3,0,19,0,0,0,7,0,23,0,11,0,5,0,17,0,25};

int getInv(int); 

using namespace std;


int main(int argc, char* argv[])
{
  
 int mInv;
 int result;
 int num = atoi(argv[1]);
 
 if (num < 0 || num > 25)
  {
   cout << "Input must be in this range: [0..25]" << endl;
   exit(EXIT_FAILURE);
  }

 mInv = getInv(num);

 if (mInv == 0)
  cout << num << " has no muliplicative inverse mod 26" << endl;
 else
 {
  result = num * mInv % 26;
  cout << "The multiplicative inverse of " << num << " mod 26 is " << mInv << endl; 
  cout << "because " << num << " times " << mInv << " mod 26 = " <<  result << endl;
 }

 return 0;
}


int getInv(int num)
{
 return DICT[num];
}
