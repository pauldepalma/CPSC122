#include <iostream>
using namespace std;

#include "calc.h"
#include <cstring>

Calc::Calc(int argcIn, char* argvIn[])
{
 inFix = new char[strlen(argvIn[1]) + 1];
 strcpy(inFix,argvIn[1]);

 values = new int[argcIn-2];
 for (int i = 2; i < argcIn; i++)
  values[i-2] = atoi(argvIn[i]);

 stk = new Stack; 






}

Calc::~Calc()
{}


bool Calc::CheckTokens()
{
 return true;
}

bool Calc::CheckParens()
{
 return true;
}
