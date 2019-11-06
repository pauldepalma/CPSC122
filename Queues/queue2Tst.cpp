#include <iostream>
using namespace std;

#include "queue2.h"


int main()
{

 Queue* que = new Queue;
 for (int i = 0; i < 5; i++)
  que->Enqueue(i);
 que->Dequeue();
 que->Print();

 Queue* que1 = new Queue(que);
 que1->Print();

 delete que;
 delete que1;
 
}
