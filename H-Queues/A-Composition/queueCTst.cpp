#include <iostream>
using namespace std;

#include "queueC.h"


int main()
{

 QueueC* que = new QueueC;
 for (int i = 0; i < 5; i++)
  que->Enqueue(i);
 que->Dequeue();
 que->Print();

 QueueC* que1 = new QueueC(que);
 que1->Print();
 
 delete que;
 delete que1;
}
