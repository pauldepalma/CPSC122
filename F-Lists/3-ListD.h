/*
Name: Paul De Palma
Class: CPSC 122 
Date Submitted: Oct. 27, 2025 
Assignment: N/A 
Description: header file for a doubly linked list with dummy nodes at head and tail
*/

#ifndef LIST_H
#define LIST_H

typedef int itemType;

struct doubleNode
{
 doubleNode* prev;
 itemType item;
 doubleNode* next;
};

class ListD
{
 public:
   
   ListD();

   /*
   Comment: This function is called a copy constructor.  When invoked from
   the test file with an existing object of type ListD, it will create
   an exact copy of the object.  That is, instead of simply creating an empty 
   new list like a conventional constructor, it will create a new list that,
   at the time of creation, is an exact copy of the list pointed to by the
   parameter.
   pre:  lst points to an object of type ListD
   post: The current object is an exact and deep copy of what lst points
         to.
   */
   ListD(ListD* lst);

   ~ListD();
  
   /*
   pre: ListD exists, pos is in the range [1..length+1]. For convenvience, the 
        first real (non-dummy) node is at position 1. 
   post: new node is inserted at postion pos. 
   */
   void Insert(itemType item, int pos);   

   /*
   pre: ListD exists, pos is in the range [1..length].
   post: node at postion, pos, is deleted 
   */
   void Delete(int pos);   

   /*
   pre: ListD exists
   post: All nodes containing item have been deleted.  Returns the
         number of nodes that have been deleted. 
   */
   int DeleteAll(itemType item);   

   /*
   pre: ListD exists.
   post: The item value of each node, from head to tail,
         is displayed on the screen, excluding the dummy nodes. 
   */
   void PrintForward();
   
   /*
   pre: ListD exits.
   post: The item value of each node, from tail to head,
         is displayed on the screen, excluding dummy nodes.
   */
   void PrintBackward();

   /*
   pre:  ListD exists
   post: Nodes in the list are in ascending order.  The algorithm used
         to put nodes in order is selection sort. Use the functions, suitably altered, of course,
	 found here: .../C-Search-Sort/2-selectionSort.cpp 
   */
   void Sort();
  
 private:
   /*
   Comment: Used in conjunction with functions that insert and delete   
   pre:  ListD exists, pos is the position where the new node is to be

         inserted. pos is in the range [1..length+1].
   Post: Returns insertion point A (see the implemention of insert), the node 
         just before the insertion point. So, in the case of insertion, 
	 if you wanted your new node to be in position 3, 
         A would point to the node in position 2.
   */
   doubleNode* FindPosition(int pos);

   /*
   Comment: Used in constructors to prevent duplicate code   
   pre:  List instance does not exist 
   post: Dummy nodes are created and private variables initialized
   */
   void InitializeVars(); 

   int length;         //length of the list
   doubleNode* head;   //points to the first dummy node 
   doubleNode* tail;   //points to the last dummy node  
};
#endif

