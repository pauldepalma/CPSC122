#include <iostream>
using namespace std;

#include "stack1.h"

int main()
{
 Stack* stk = new Stack;

 cout << "push 0 through 4 on the stack" << endl;
 for (int i = 0; i < 5; i++)
   stk->Push(i);
 stk->Push('+');
 for (int i = 0; i < 6; i++)
  {
   int x = stk->Peek();
   stk->Pop();
   if (x == '+')
     cout << char(x) << endl;
  }
 //stk->Print();
 delete stk;
 return 0;
}
