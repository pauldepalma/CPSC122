#include <iostream>
using namespace std;

#include "queue4.h"

CQueue::CQueue(int sizeIn)
{
 //design philsophy
 //front and back are always 1 position behind the actual front and back
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
 back = (back+1) % size; //adjust the back before enqueue
 que[back] = newItem;
 length++;
 return true;
}

bool CQueue::Dequeue()
{
 if (IsEmpty())
   return false;
 front = (front+1) % size; //adjust front implies dequeue
 length--;
 return true;
}

bool CQueue::Peek(itemType& item)
{
 if (IsEmpty())
   return false;
 item = que[front+1]; //front is always one position behind
 return true;
}

void CQueue::Print()
{
 int num = 0;
 int next = -1;
 while (num < length)
 {
  next = (next + 1) % size;
  cout << que[next] << endl;
  num++;
 }
}
