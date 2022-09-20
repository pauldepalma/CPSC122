#include <iostream>
using namespace std;


char encrypt(char,int);
char decrypt(char,int);
void keyGen(string);

int main(int argc, char* argv[])
{
 char ch = argv[1][0];
 int key = atoi(argv[2]);
 string fileOut = argv[3];

 char chE = encrypt(ch,key); 
 cout << chE << endl;
 char chD = decrypt(chE,key); 
 cout << chD << endl;

 keyGen(fileOut);

 return 0;
}

char encrypt(char ch, int key)
{
 ch = ch - 'A';
 ch = (ch + key) % 26;
 ch = ch + 'A';
 return ch;
}

char decrypt(char ch, int key)
{
 ch = ch - 'A';
 ch = (ch -  key + 26) % 26;
 ch = ch + 'A';
 return ch;
}

void keyGen(string fileOut)
{
 cout << fileOut << endl;
}
