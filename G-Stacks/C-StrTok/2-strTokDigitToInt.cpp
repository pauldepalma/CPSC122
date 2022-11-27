#include <iostream>
using namespace std;

#include <cstring>
//separates integers from a fully parenthesized express into an array of integers
//usage ./a.out "((12+3)*2)"
int main(int argc, char* argv[])
{
 char* ptr;
 char* str = new char[strlen(argv[1]) + 1];
 strcpy(str, argv[1]);
 int* tokens = new int[26];
 char delimiters[] = " ()+_*/"; //tokens used in arithmetic expressions

 int i = 0;
 ptr = strtok(str,delimiters);
 while (ptr != NULL)
 {
  tokens[i] = atoi(ptr); 
  ptr = strtok(NULL,delimiters);
  i++;
 }
 //adding j to demonstrate that the results are integers
 for (int j = 0; j < i; j++)
  cout << tokens[j] + j << endl;
}

