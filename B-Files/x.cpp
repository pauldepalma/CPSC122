#include<iostream>
using namespace std;

char encrypt(char,int);



int main(int argc, char* argv[])
{
 int k = atoi(argv[1]);
 cout << encrypt('Z',k) << endl;
 return 0;
}

char encrypt(char ch, int k)
{
 int pos = ch - 'A'; 
 pos = (pos + k) % 26;
 ch = pos + 'A';
 return ch;
} 
