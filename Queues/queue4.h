//Queue implemented as a circular queue 

#ifndef CQUEUE
#define CQUEUE

typedef int itemType; 

class CQueue 
{
 public:
   CQueue();
   CQueue(CQueue* q);
 
   ~CQueue();

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
   post: returns the queue. queue is undisturbed 
   */
   itemType Peek();

   /*
   pre: an instance of queue exists and is not empty
   post: each item from  the queue is displayed on subsequent lines 
   */
   void Print();

 private:
   itemType* que;//pointer to array holding the queue3 
};
#endif

