#include <iostream>
using namespace std;

#include "queueP.h"


int main()
{

 PQueue* que = new PQueue;
 for (int i = 1; i <= 10; i++)
  que->Enqueue(i);
 que->Print();
 cout << endl;
 cout << endl;
 cout << endl;
 que->Enqueue(5);
 que->Enqueue(5);
 que->Enqueue(5);
 que->Enqueue(1);
 que->Enqueue(0);
 que->Enqueue(50);
 que->Print();
 cout << endl;
 cout << "Length: " << que->GetLength() << endl;
 cout << endl;
 que->Dequeue();
 que->Print();
 cout << endl;
 cout << "Length: " << que->GetLength() << endl;
 delete que;
 
}
