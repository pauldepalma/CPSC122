#include <iostream>
#include <fstream>
using namespace std;


int main()
{
 ifstream fin;
 
 fin.open("dictInv.txt");

 int inv[26];

 int idx = 0;
 
 while(fin >> inv[idx++]);
 fin.close();

 for (int i = 0; i < 26; i++)
  cout << i << " " << inv[i] << endl; 

 return 0;
}
