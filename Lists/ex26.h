/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex26.h
Header file for a linked list with head and tail pointers  
To Build: g++ ex26Tst.cpp ex26.cpp 
To Execute: ./a.out
*/


#ifndef LIST_H
#define LIST_H

typedef int itemType;

struct node
{
 itemType item;
 node* next;
};

class List1
{
 public:
   List1();
   ~List1();

   /*
   pre: an instance of lists exists
   post: returns true if list is empty, false otherwise
   */ 
   bool IsEmpty() const;

   /*
   pre: an instance of list exists
   post: returns length of the list 
   */
   int GetLength() const;

   /*
   pre: an instance of list exists
   post: newItem is at the head of the list 
   */
   void PutItemH(const itemType newItem);

   /*
   pre: an instance of list exists and is not empty
   post: Returns the contents of the head of the list. 
   */
   itemType GetItemH() const;

   /*
   pre: an instance of list exists and is not empty
   post: head of the list is deleted 
   */
   void DeleteItemH();

   /*
   pre: an instance of list exists
   post: newItem is at the tail of the list 
   */
   void PutItemT(const itemType newItem);

   /*
   pre: an instance of list exists and is not empty
   post: Returns the contents of the tail of the list. 
   */
   itemType GetItemT() const;

   /*
   pre: an instance of list exists and is not empty
   post: tail of the list is deleted 
   */
   void DeleteItemT();

   /*
   pre: an instance of list exists and is not empty
   post: contents of list nodes are displayed on subsequent lines 
   */
   void Print() const;
  
   /*
   pre: an instance of list exists and is not empty
   post: returns the number of nopdesd in the list that store target 
   */
   int FindItem(const itemType target) const;

   /*
   pre:  an instance of List exists and is not empty 
   post: deletes all nodes that store target.  Returns
         the number of nodes deleted 
   */
   int DeleteItem(const itemType target);

 private:
   /*
   pre: length of list > 1 
   post: returns the address of the node just before the 
         node pointed to by the tail 
   */
   node* PtrTo();
   int length;   //length of the list
   node* head;   //points to the first node on the list 
   node* tail;   //points to the last node on the list 
};
#endif

