#include <iostream>
using namespace std;

#include "queue2.h"


int main()
{

 Queue2* que = new Queue2;
 for (int i = 0; i < 5; i++)
  que->Enqueue(i);
 que->Dequeue();
 que->Print();

 Queue2* que1 = new Queue2(que);
 que1->Print();

 delete que;
 delete que1;
 
}
