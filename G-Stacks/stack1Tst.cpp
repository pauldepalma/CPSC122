#include <iostream>
using namespace std;

#include "stack1.h"

int main()
{
 Stack* stk = new Stack;

 for (int i = 0; i < 5; i++)
   stk->Push(i);
 stk->Pop();
 cout << stk->Peek() << endl;
 stk->Print();
 delete stk;
 return 0;
}
