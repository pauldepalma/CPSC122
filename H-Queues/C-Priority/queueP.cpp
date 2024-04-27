//Priority queue using inheritance.  PQueue inherits from QueueI which inherits from List
#include <iostream>
using namespace std;

#include "queueP.h"

PQueue::PQueue() : QueueI()
{
}

PQueue::PQueue(PQueue* q) : QueueI(q)
{}

void PQueue::Enqueue(itemType newItem)
{
}

node* PQueue::PtrTo(itemType newItem)
{
}
	
