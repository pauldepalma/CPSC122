/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex34.h
Header file for a doubly linked list with dummy notes at head and
tail to make insertion and deletion easier
To Build: g++ ex27Tst.cpp ex27.cpp
To Execute: ./a.out
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

class List2
{
 public:
   
   List2();

   /*
   Comment: This function is called a copy constructor.  When invoked from
   the test file with an existing object of type List2, will create
   an exact copy of the object.  That is, instead simply creating an empty 
   new list like a conventional constructor, it will create a new list that,
   at the time of creation, is an exact copy of the list pointed to by the
   parameter.
   pre:  lst points to an object of type List2
   post: The current object is an exact and deep copy of what lst points
         to.
   */
   List2(List2* lst);

   ~List2();
  
   /*
   pre: List exists, pos is in the range [1..length+1].
   post: new node is inserted at postion pos. 
   */
   void Insert(itemType item, int pos);   

   /*
   pre: List exists, pos is in the range [1..length].
   post: node at postion, pos, is deleted 
   */
   void Delete(int pos);   

   /*
   pre: List exists
   post: All nodes containing item have been deleted.  Returns the
         number of nodes that have been deleted. 
   */
   int DeleteAll(itemType item);   

   /*
   pre: List exits.
   post: The item value of each node, from head to tail,
         is displayed on the screen, excluding the dummy nodes. 
   */
   void PrintForward();
   
   /*
   pre: List exits.
   post: The item value of each node, from tail to head,
         is displayed on the screen, excluding dummy nodes.
   */
   void PrintBackwards();

   /*
   pre:  List exists
   post: Nodes in the list are in ascending order.  The algorithm used
         to put nodes in order is selection sort. 
   */
   void Sort();
  
 private:
   /*
   Comment: Used in conjunction with insert (and, possibly, delete)
   pre:  List exists, pos is the position where the new node is to be
         inserted. pos is in the range [1..length+1].
   Post: Returns insertion point A (see the implemention of insert)
         used in inserting a node in a list 
   */
   doubleNode* FindPosition(int pos);

   int length;         //length of the list
   doubleNode* head;   //points to the first dummy node 
   doubleNode* tail;   //points to the last dummy node  
};
#endif

