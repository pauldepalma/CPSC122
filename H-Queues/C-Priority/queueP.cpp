//Queue using List and composition 
#include <iostream>
using namespace std;
#include "queueP.h"
//note Queue is the queue implemented through inheritance or composition.  Find the files
//under B-Inheritance.  

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
 return NULL;
}
	
