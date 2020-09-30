//Queue implemented using a List and composition

#ifndef QUEUE
#define QUEUE
 
#include "list.h"

class Queue 
{
 public:
   Queue();
   Queue(Queue* q);
 
   ~Queue();

   /*
   pre: an instance of queue exists
   post: true if queue is empty, false otherwise
   */ 
   bool IsEmpty();

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

   /*
   pre: an instance of queue exists and is not empty
   post: each item from the queue is displayed on subsequent lines 
   */
   void Print();

 private:
   List* lst;   //points to the first node on the list implementing the queue 
};
#endif

