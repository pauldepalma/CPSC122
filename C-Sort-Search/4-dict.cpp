/*
Name: Paul De Palma
Class: CPSC 12
Date Submitted: Feb 11, 2021
Assignment: N/A 
Description: illustrates using an array as a dictionary of multiplicative inverses.
            if array[k] = 0, k has no MI mod 26
	    if array[k] = m, m is the MI of k mod 26 
*/


#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World" << endl;
  return 0;
}

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
 ifstream fin;
 
 fin.open("4-dictInv.txt");

 int inv[26];

 int idx = 0;
 
 while(fin >> inv[idx++]);
 fin.close();

 cout << "Integers with MI mod 26" << endl;
 cout << "0 in right col. means integer in left col has no MI mod 26" << endl << endl
 for (int i = 0; i < 26; i++)
  cout << i << " " << inv[i] << endl; 

 return 0;
}
