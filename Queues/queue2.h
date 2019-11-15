//Queue implemented using a List and inheritance 

#ifndef QUEUE_H
#define QUEUE_H
 
#include "list.h"

class Queue : public List
{
 public:
   Queue();
   Queue(Queue* q);

   /*
   pre: an instance of queue exists
   post: newItem is at the end of the queue 
   */
   void Enqueue(itemType newItem);

   /*
   pre: an instance of Queue exists and is not empty
   post: first item in queue has been removed.  
   */
   void Dequeue();

   /*
   pre: an instance of queue exists and is not empty
   post: returns the head of the queue. queue is undisturbed 
   */
   itemType Peek();

};
#endif

