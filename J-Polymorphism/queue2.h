//Queue implemented using a List and inheritance 

#ifndef QUEUE_H
#define QUEUE_H
 
#include "list.cpp"

template <typename T>
class Queue : public List<T>
{
 public:
   Queue();
   Queue(Queue*);

   /*
   pre: an instance of queue exists
   post: newItem is at the end of the queue 
   */
   void Enqueue(T);

   /*
   pre: an instance of Queue exists and is not empty
   post: first item in queue has been removed.  
   */
   void Dequeue();

   /*
   pre: an instance of queue exists and is not empty
   post: returns the head of the queue. queue is undisturbed 
   */
   T Peek();

};
#endif

