#include <iostream>
using namespace std;

#include "stack2.h"

int main()
{
 Stack* stk = new Stack;

 cout << "push 0 through 4 on the stack" << endl;
 for (int i = 0; i < 5; i++)
   stk->Push(i);
 stk->Pop();
 stk->Print();

 delete stk;

 return 0;

}
