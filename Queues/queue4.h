//Queue implemented as a circular queue 

#ifndef CQUEUE
#define CQUEUE

typedef int itemType; 

class CQueue 
{
 public:
   CQueue(int size);
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
   itemType* que; //pointer to array holding the queue3 
   int front;     //index of front of queue
   int back;      //index of back of queue
   int length;    //num items in the queue;
   int size;      //num slots in queue
};
#endif

