#include <iostream>
using namespace std;

#include "queue.h"


int main()
{
 Queue* que1 = new Queue(5);
 for (int i = 1; i <= 5; i++)
  que1->Enqueue(i);
 que1->Dequeue();
 que1->Dequeue();
 que1->Dequeue();
 que1->Dequeue();
 que1->Enqueue(100);
 que1->Print();
 cout << endl;

 itemType item;
 que1->Peek(item);
 cout << item << endl;
 cout << endl;

 Queue* que2 = new Queue(que1);
 que2->Print();
 delete que1;
 delete que2;
}
