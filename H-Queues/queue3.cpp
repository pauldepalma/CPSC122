//Queue using List and composition 
#include <iostream>
using namespace std;
#include "queue3.h"

PQueue::PQueue() : Queue()
{
 cout << "constructor priority queue" << endl;
}

PQueue::PQueue(PQueue* q) : Queue(q)
{}

void PQueue::Enqueue(itemType newItem)
{ 
}

node* PQueue::PtrTo(itemType newItem)
{
 return NULL;
}
	
