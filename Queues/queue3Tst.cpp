#include <iostream>
using namespace std;

#include "queue3.h"


int main()
{

 PQueue* que = new PQueue;
 que->Enqueue(5);
 que->Enqueue(0);
 que->Enqueue(12);
 que->Enqueue(13);
 que->Print();

 delete que;
 
}
