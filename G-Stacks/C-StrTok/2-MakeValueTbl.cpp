#include <iostream>
using namespace std;
#include <cstring>

/*
Uses strTok to extract the integers from a fully parenthesized arithmetic
expression entered at the command line. Used in the first part of the 
calculator project
usage ./a.out "((12+3)*2)"
output: 12
         3
	 2
*/

void AddToValueTbl(char*,int*);

int main(int argc, char* argv[])
{
 int valueTbl[26];
 for (int i = 0; i< 26; i++)
   valueTbl[i] = 0;
 AddToValueTbl(argv[1],valueTbl);
 int i = 0; 
 while(valueTbl[i] != 0)
 {
   cout <<  valueTbl[i] << endl; 
   i++;
 }
}

/*
pre: expression is a fully parenthsized arithmetic expression represented as C-String
post: Integers are stored in global array 
*/
void AddToValueTbl(char* expression,int* valueTbl)
{
 char* ptr;
 char* str = new char[strlen(expression) + 1];
 strcpy(str, expression);
 char delimiters[] = " ()+_*/"; //tokens used in arithmetic expressions

 int i = 0;
 ptr = strtok(str,delimiters);
 while (ptr != NULL)
 {
  valueTbl[i] = atoi(ptr); 
  ptr = strtok(NULL,delimiters);
  i++;
 }
}
