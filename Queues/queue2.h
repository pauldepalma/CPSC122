//Queue implemented using a List and inheritance 

#ifndef QUEUE_H
#define QUEUE_H
 
#include "list2.h"

class Queue2 : public List2
{
 public:
   Queue2();
   Queue2(Queue2* q);

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
   post: returns the top of the stack. stack is undisturbed 
   */
   itemType Peek();

};
#endif

