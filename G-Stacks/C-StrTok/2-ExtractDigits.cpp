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

struct results
{
 int* items;
 int len;
};

results* AddToValueTbl(char* expression);

int main(int argc, char* argv[])
{
 results* nums = AddToValueTbl(argv[1]);
 for (int i = 0; i < nums->len; i++)
  cout << nums->items[i] << endl;

}

/*
pre: expression is a fully parenthsized arithmetic expression represented as C-String
post: returns a struct containing a pointer to an array holding the integers plus
      the length of the array
*/
results* AddToValueTbl(char* expression)
{
 char* ptr;
 char* str = new char[strlen(expression) + 1];
 strcpy(str, expression);
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
 results* nums = new results;
 nums->len = i;
 nums->items = tokens;
 return nums; 
}
