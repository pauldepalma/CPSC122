//Priority Queue 

#ifndef PQUEUE
#define PQUEUE
 
#include "queue2.h"
/*
PQueue is a priority queue.  Nodes in PQueue are in ascending order by item
*/
class PQueue : public Queue
{
 public:
   PQueue();
   PQueue(PQueue* q);

   /*
   pre: an instance of PQueue  exists. nodes in queue are in ascending order by 
        item;
   post: A new node is added to PQueue, which remains in sorted order 
   */
   void Enqueue(itemType newItem);

   /*
   pre: an instance of Queue exists and is not empty
   post: first item in queue has been removed.  
   */
   //void Dequeue();

   /*
   pre: an instance of queue exists and is not empty
   post: returns the top of the stack. stack is undisturbed 
   */
   //itemType Peek();

};
#endif

