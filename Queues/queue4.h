//Priority Queue 

#ifndef QUEUE4_H
#define QUEUE4_H
 
#include "queue2.h"

class Queue4 : public Queue2
{
 public:
   Queue4();
   Queue4(Queue4* q);

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

