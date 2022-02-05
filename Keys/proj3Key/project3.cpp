/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date: January 27, 2022
Project 3 
Description: Converts two C-strings gotten from the command line to integers.
Multiplies them and writes the product to a file whose name is also 
gotten from the command line.
*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int atoiMy(char[]);
int power(int,int);

int main(int argc, char* argv[])
{
 ofstream fout;

 int num1 = atoiMy(argv[1]);
 int num2 = atoiMy(argv[2]);
 int num3 = num1 * num2;

 fout.open(argv[3]);
 fout << num3 << endl;
 fout.close();
 
 return 0;
}

/*
Description: Converst a C-string to an integer
Input: C-string
Output: integer based on the contents of the C-string
*/
int atoiMy(char str[])
{
 int pos = strlen(str) - 1;
 int exp = 0;
 int num = 0;

 while(pos >= 0)
 {
  num = num + power(10,exp) * (str[pos] - '0'); 
  pos--;
  exp++;
 }

 return num;
}

/*
Description: Performs exponention with positive exponents
input: base and exponent as integers
output: returns base to the exponent power
TA Note: Students may use a library function to exponentiate
*/
int power(int base, int exp)
{
 int value = 1;

 for (int i = 0; i < exp; i++)
  value = value * base;
 return value;
}
