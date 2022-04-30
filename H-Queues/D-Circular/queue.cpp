#include <iostream>
using namespace std;

#include "queue.h"

Queue::Queue(int sizeIn)
{
 size = sizeIn;
 length = 0;
 front = -1;
 back = -1;
 que = new itemType[size];
}

Queue::Queue(Queue* q)
{
 size = q->size;
 length = q->length;
 front = q->front;
 back = q->back;
 que = new itemType[size];
 for (int i = 0; i < size; i++)
   que[i] = q->que[i];
}
 
Queue::~Queue()
{
 delete [] que;
}


bool Queue::IsEmpty()
{
 if (length == 0)
  return true;
 return false;
}

bool Queue::IsFull()
{
 if (length == size)
  return true;
 return false;
}

bool Queue::Enqueue(itemType newItem)
{
 if (IsFull())
   return false;
 back = (back+1) % size; //adjust the back before enqueue
 que[back] = newItem;
 length++;
 return true;
}

bool Queue::Dequeue()
{
 if (IsEmpty())
   return false;
 front = (front+1) % size; //adjust front implies dequeue
 length--;
 return true;
}

bool Queue::Peek(itemType& item)
{
 if (IsEmpty())
   return false;
 int adjFront = (front + 1) % size;
 item = que[adjFront]; 
 return true;
}

void Queue::Print()
{
 int num = 0;
 int adjFront = front; 
 while (num < length)
 {
  adjFront = (adjFront + 1) % size;
  cout << que[adjFront] << endl;
  num++;
 }
}
