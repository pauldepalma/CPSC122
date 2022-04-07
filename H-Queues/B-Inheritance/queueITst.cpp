#include <iostream>
using namespace std;

#include "queueI.h"


int main()
{

 QueueI* que = new QueueI;
 for (int i = 0; i < 5; i++)
  que->Enqueue(i);
 que->Dequeue();
 que->Print();

 QueueI* que1 = new QueueI(que);
 que1->Print();

 delete que;
 delete que1;
 
}
