#include <iostream>
using namespace std;

#include "stack2.h"

int main()
{
 Stack stk;
 float x = 6.0;
 float y =  5.0;
 float z = x/y;
 stk.Push(z);
 stk.Push(7);
 stk.Push('A');
 stk.Print();

 return 0;

}
