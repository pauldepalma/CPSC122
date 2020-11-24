#include <iostream>
using namespace std;

#include "stack2.h"

int main()
{
 Stack stk;

 cout << "push 0 through 4 on the stack" << endl;
 for (int i = 0; i < 5; i++)
   stk.Push(i);

 if (stk.IsEmpty())
  cout << "empty" << endl;
 else
  cout << "not empty" << endl;


 return 0;

}
