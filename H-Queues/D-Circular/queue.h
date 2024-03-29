//Queue implemented as a circular queue 

#ifndef QUEUE
#define QUEUE

typedef int itemType; 

class Queue 
{
 public:
   Queue(int size);
   Queue(Queue* q);
 
   ~Queue();

   /*
   pre: an instance of queue exists
   post: true if queue is empty, false otherwise
   */ 
   bool IsEmpty();

   /*
   pre: an instance of queue exists
   post: true if queue is full, false otherwise
   */ 
   bool IsFull();

   /*
   pre: an instance of queue exists
   post: if not full, returns true and newItem is at end of the queue,
         returns false otherwise 
   */
   bool Enqueue(itemType newItem);

   /*
   pre: an instance of Queue exists
   post: if not empty, returns true and head has been dequeued, false
         otherwise
   */
   bool Dequeue();

   /*
   pre: an instance of queue exists
   post: if not empty, head holds head of queue and returns true, 
         returns false otherwise 
   */
   bool Peek(itemType& head);

   /*
   pre: an instance of queue exists and is not empty
   post: each item from  the queue is displayed on subsequent lines 
   */
   void Print();

 private:
   itemType* que; //pointer to array holding the queue 
   int front;     //always points to 1 position prior to the back
   int back;      //except for empty queue, points to actual back of queue
   int length;    //num actual items in the queue;
   int size;      //num slots in queue
};
#endif

