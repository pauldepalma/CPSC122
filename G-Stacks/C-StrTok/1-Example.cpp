#include <string.h>
#include <stdio.h>
//divide string using - as a  delimiter. 
//usage: ./a.out
int main()
{
 char str[80] = "This is a string - www.tut - website";
 const char s[2] = "-";

 char* token;

 token = strtok(str,s);

 while(token != NULL)
 {
  printf(" %s\n", token);
  token = strtok(NULL, s);
 }
 return 0;
}
