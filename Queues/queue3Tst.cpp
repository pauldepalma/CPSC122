#include <iostream>
using namespace std;

#include "queue3.h"


int main()
{

 PQueue* que = new PQueue;
 for (int i = 5; i >= 0; i--)
  que->Enqueue(i);
 que->Dequeue();
 que->Print();
 cout << que->Peek() << endl;
 PQueue* que1 = new PQueue(que);
 que1->Print();

 delete que;
 delete que1;
 
}
