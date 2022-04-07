#include <iostream>
using namespace std;

#include "queue4.h"


int main()
{
 CQueue* que1 = new CQueue(5);
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

 CQueue* que2 = new CQueue(que1);
 que2->Print();
 delete que1;
 delete que2;
}
