//Queue using List and composition 
#include <iostream>
using namespace std;
#include "queueC.h"

QueueC::QueueC()
{
 lst = new List();
}

QueueC::QueueC(QueueC* q)
{
 lst = new List(q->lst);
}

void QueueC::Enqueue(itemType newItem)
{ 
 lst->PutItemT(newItem);
}

QueueC::~QueueC()
{
 delete lst;
}

bool QueueC::IsEmpty()
{
 return lst->IsEmpty();
}

void QueueC::Dequeue()
{
 lst->DeleteItemH();
}

itemType QueueC::Peek()
{
 return lst->GetItemH(); 
}

void QueueC::Print()
{
 lst->Print();
}
	
