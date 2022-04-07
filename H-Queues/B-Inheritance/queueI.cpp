//QueueI using List and composition 
#include <iostream>
using namespace std;
#include "queueI.h"

QueueI::QueueI() : List()
{
}


QueueI::QueueI(QueueI* q) : List(q)
{}

void QueueI::Enqueue(itemType newItem)
{ 
 PutItemT(newItem);
}

void QueueI::Dequeue()
{
 DeleteItemH();
}

itemType QueueI::Peek()
{
 return GetItemH(); 
}
	
