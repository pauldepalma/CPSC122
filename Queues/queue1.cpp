//Queue using List and composition 
#include <iostream>
using namespace std;
#include "queue1.h"

Queue::Queue()
{
 lst = new List();
}

Queue::Queue(Queue* q)
{
 lst = new List(q->lst);
}

void Queue::Enqueue(itemType newItem)
{ 
 lst->PutItemT(newItem);
}

Queue::~Queue()
{
 delete lst;
}

bool Queue::IsEmpty()
{
 return lst->IsEmpty();
}

void Queue::Dequeue()
{
 lst->DeleteItemH();
}

itemType Queue::Peek()
{
 return lst->GetItemH(); 
}

void Queue::Print()
{
 lst->Print();
}
	
