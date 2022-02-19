/*
Name: Paul De Palma
Class: CPSC 12
Date Submitted: Feb 19, 2022
Assignment: N/A 
Description: illustrates using an array as a dictionary of multiplicative inverses.
            if array[k] = 0, k has no MI mod 26
	    if array[k] = m, m is the MI of k mod 26 
*/



#include <iostream>
#include <fstream>

void createDict(int[]);
int getInv(int[], int); 


using namespace std;


int main(int argc, char* argv[])
{

 int num = atoi(argv[1]);
 int inv[26];
 int mInv;
 int result;
 
 createDict(inv);

 mInv = getInv(inv,num);

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

void createDict(int inv[])
{
 ifstream fin;
 
 fin.open("4-dictInv.txt");

 int idx = 0;
 
 while(fin >> inv[idx++]);

 fin.close();
}

int getInv(int inv[], int num)
{
 return inv[num];
}
