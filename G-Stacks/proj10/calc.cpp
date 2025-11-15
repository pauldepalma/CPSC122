#include <iostream>
using namespace std;

#include "calc.h"
#include <cstring>


//Write functions in this order.  Constructor and destructor will be built as the
//functions it invokes are written

Calc::Calc(char* argvIn)
{
}

Calc::~Calc()
{}

bool Calc::CheckTokens()
{
 /*
 Here is some sample code to show how cstring functions might be used
 char x = '(';
 cout << x << endl;
 if (!isdigit(x))
  cout << x << endl;
 char y = x + 25;
 cout << y << endl;
 if (isupper(y))
  cout << y << endl;
 */

 return true;
}

void Calc::MakeValueTbl()
{}

void Calc::Parse()
{}

bool Calc::CheckParens()
{
 return true;
}

void Calc::DisplayInFix()
{}

void Calc::InFixToPostFix()
{}

void Calc::DisplayPostFix()
{}

int Calc::Evaluate()
{
 return 0;
}
