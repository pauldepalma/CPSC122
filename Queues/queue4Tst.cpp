#include <iostream>
using namespace std;

#include "queue4.h"


int main()
{
 CQueue* que1 = new CQueue(10);
 for (int i = 0; i < 10; i++)
  que1->Enqueue(i);
 que1->Enqueue(100);
 que1->Dequeue();
 cout << "Queue1" << endl;
 que1->Print();

 CQueue* que2 = new CQueue(que1);
 cout << "Queue2" << endl;
 que2->Print();
 cout << "Peek Queue2" << endl;
 itemType item;
 if (que2->Peek(item))
   cout << item << endl;
 delete que1;
 delete que2;
}
