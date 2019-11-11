//Queue using List and composition 
#include <iostream>
using namespace std;
#include "queue3.h"

PQueue::PQueue() : Queue()
{}

PQueue::PQueue(PQueue* q) : Queue(q)
{}

void PQueue::Enqueue(itemType newItem)
{ 
 PutItemT(newItem);
}
/*
void PQueue::Dequeue()
{
 DeleteItemH();
}

itemType PQueue::Peek()
{
 //return GetItemH(); 
}
*/
	
