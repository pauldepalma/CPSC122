//Queue using List and composition 
#include <iostream>
using namespace std;
#include "queueP.h"

PQueue::PQueue() : QueueI()
{
 cout << "constructor priority queue" << endl;
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
	
