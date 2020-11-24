#include <iostream>
using namespace std;

#include "queue4.h"


int main()
{
 CQueue* que1 = new CQueue(10);
 for (int i = 0; i < 10; i++)
  que1->Enqueue(i);
 //que1->Enqueue(100);
 //que1->Dequeue();
 que1->Print();
 cout << endl;

 itemType x;
 que1->Peek(x);
 cout << "head " << x << endl; 
 delete que1;
}
