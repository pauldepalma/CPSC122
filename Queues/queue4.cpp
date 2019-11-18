#include <iostream>
using namespace std;

#include "queue4.h"

CQueue::CQueue(int sizeIn)
{
 size = sizeIn;
 length = 0;
 front = -1;
 back = -1;
 que = new itemType[size];
}

CQueue::CQueue(CQueue* q)
{
 size = q->size;
 length = q->length;
 front = q->front;
 back = q->back;
 que = new itemType[size];
 for (int i = 0; i < size; i++)
   que[i] = q->que[i];
}
 
CQueue::~CQueue()
{
 delete [] que;
}


bool CQueue::IsEmpty()
{
 if (length == 0)
  return true;
 return false;
}

bool CQueue::IsFull()
{
 if (length == size)
  return true;
 return false;
}

bool CQueue::Enqueue(itemType newItem)
{
 if (IsFull())
   return false;
 back = (back+1) % size;
 que[back] = newItem;
 length++;
 return true;
}

bool CQueue::Dequeue()
{
 if (IsEmpty())
   return false;
 front = (front+1) % size;
 length--;
 return true;
}

bool CQueue::Peek(itemType& item)
{
 if (IsEmpty())
   return false;
 item = que[front+1];
 return true;
}

void CQueue::Print()
{
 int num = 0;
 int adjFront = (front + 1) % size;
 while (num < length)
 {
  cout << que[adjFront] << endl;
  adjFront = (adjFront + 1) % size;
  num++;
 }
}
