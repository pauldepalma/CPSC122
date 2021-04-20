//Queue using List and composition 
#include <iostream>
using namespace std;
#include "queue2.h"

Queue::Queue() : List()
{
}


Queue::Queue(Queue* q) : List(q)
{}

void Queue::Enqueue(itemType newItem)
{ 
 PutItemT(newItem);
}

void Queue::Dequeue()
{
 DeleteItemH();
}

itemType Queue::Peek()
{
 return GetItemH(); 
}
	
