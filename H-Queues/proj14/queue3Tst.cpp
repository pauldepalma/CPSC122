#include <iostream>
using namespace std;

#include "queue3.h"


int main()
{

 PQueue* que = new PQueue;
 int i = 0;
 while (i < 15)
 {
  que->Enqueue(i);
  i = i + 3;
 }
 que->Print();
 cout << endl;
 que->Enqueue(8);
 que->Print();
 delete que;
 
}
