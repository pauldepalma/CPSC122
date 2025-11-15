#include <iostream>
using namespace std;

#include <cstring>
#include "calc.h"

//Write functions in this order.  Constructor and destructor will be built as the
//functions it invokes are written

Calc::Calc(char* argvIn)
{
 inFix = new char[strlen(argvIn)]; strcpy(inFix,argvIn);
 MakeValueTbl();
 Parse();
}

Calc::~Calc()
{}

bool Calc::CheckTokens()
{
 return true;
}

void Calc::MakeValueTbl()
{
 valueTbl = new int[26];
 valueIdx = 0;
}

void Calc::Parse()
{
 /*results* nums = AddToValueTbl(inFix);
 for (int i = 0; i < nums->len; i++)
   cout << nums->items << endl;
 */
}

results* Calc::AddToValueTbl(char* expression)
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

bool Calc::CheckParens()
{
 return true;
}

void Calc::DisplayInFix()
{

}


