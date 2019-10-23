/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex27.h
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
   ~List2();
  
   /*
   pre: List exists, pos is in the range [1..length+1].
   post: new node is inserted at postion pos. 
   */
   void Insert(itemType item, int pos);   

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


 private:
   /*
   pre: List exists, pos is in the range [1..length+1].
   Post: Returns the position of the node in position pos
   */
   doubleNode* FindPosition(int pos);
   int length;         //length of the list
   doubleNode* head;   //points to the first dummy node 
   doubleNode* tail;   //points to the last dummy node  
};
#endif

