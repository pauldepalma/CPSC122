#include <iostream>
using namespace std;

#include <cstring>

int main(int argc, char* argv[])
{
 char* ptr;
 char* str = new char[strlen(argv[1]) + 1];
 strcpy(str, argv[1]);
 int* tokens = new int[26];
 char delimiters[] = " ()+_*/";

 int i = 0;
 ptr = strtok(str,delimiters);
 while (ptr != NULL)
 {
  tokens[i] = atoi(ptr); 
  ptr = strtok(NULL,delimiters);
  i++;
 }
 for (int j = 0; j < i; j++)
  cout << tokens[j] << endl;

}

