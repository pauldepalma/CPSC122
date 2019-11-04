//Queue using List and composition 
#include <iostream>
using namespace std;
#include "queue2.h"

Queue2::Queue2() : List2()
{}

Queue2::Queue2(Queue2* q) : List2(q)
{}

void Queue2::Enqueue(itemType newItem)
{ 
 PutItemT(newItem);
}

void Queue2::Dequeue()
{
 DeleteItemH();
}

itemType Queue2::Peek()
{
 GetItemH(); 
}
	
