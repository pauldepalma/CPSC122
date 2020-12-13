//Priority Queue 

#ifndef PQUEUE
#define PQUEUE
 
#include "queue2.cpp"
/*
PQueue is a priority queue.  Nodes in PQueue are in ascending order by item
*/

//See list.h for a definition of node.  

template <typename T>
class PQueue : public Queue<T>
{
 public:
   PQueue();

   /*
   pre: an instance of PQueue  exists. nodes in queue are in ascending order by 
        priority (see list.h)
   post: A new node is added to PQueue, which remains in sorted order 
   */
   void Enqueue(int pty, T newItem);

   /*
   pre: an instance of PQueue  exists. nodes in queue are in ascending order by 
        item;
   post: Priorities and values are displayed on subsquent lines
         p1 v1
	 p2 v2
	 ...
	suppose p1 = 13, v1 "Merry"
                p2 = 15, v2 "Christmas"	
        The display would be:
	13 Merry
	15 Christmas

   Hint: Think of the separate insertion cases.  There at least 3.  Code and
   test each one separately.
   */
   void Print() const;

 private:
   /*
   use: Used in Enqueue. 
   pre: Item to be inserted belongs somewhere between the head and tail  
   post: Returns the insertion point of the new item. 
   Suppose priorities in a list are like this:
   12 -> 42 -> 97 -> 112
   50 comes along
   PtrTo returns the address of the node containing priority 42 
   */
  node<T>* PtrTo(int pty);
};
#endif

