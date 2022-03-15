/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: March, 2022
Assignment: N/A 
Description: Program illustrates a linked list both head and tail pointers 
*/

#ifndef LIST_H
#define LIST_H

typedef int itemType;

struct node
{
 itemType item;
 node* next;
};

class ListT
{
 public:
   /*
   pre: None. This is the constructor function, invoked like this from the 
        the client program: 
        List1 lst;
	or
	List1* lst = new List1;
   post: an instance of ListT exists
   */ 
   ListT();


   /*

   pre: An instance of ListT exists.  This is the destructor function, automatically
        invoked in the case of a static declaration, explcitly invoked, using the delete
        key word, in the case of a dynamic declaration.	
   post: All dynamically declared memory, i.e., the memory for all nodes, has been
        returned to the heap.   
   */ 
   ~ListT();

   /*
   pre: an instance of ListT exists
   post: returns true if list is empty, false otherwise
   */ 
   bool IsEmpty() const;

   /*
   pre: an instance of ListT exists
   post: returns length of the list 
   */
   int GetLength() const;

   /*
   pre: an instance of ListT exists
   post: node containing itemIn is at the head of the list 
   */
   void PutItemH(const itemType itemIn);

   /*
   pre: an instance of ListT exists and is not empty
   post: Returns the contents pointed to by the head of the list 
   */
   itemType GetItemH() const;

   /*
   pre: an instance of listT exists and is not empty
   post: Node pointed to by head is deleted 
   */
   void DeleteItemH();

   /*
   pre: an instance of listT exists
   post: node containing itemIn is at the tail of the list 
   */ 
   void PutItemT(const itemType itemIn);

   /*
   pre: an instance of list exists and is not empty
   post: Returns the contents of the node at the tail of the list. 
   */
   itemType GetItemT() const;

   /*
   pre: an instance of list exists and is not empty
   post: node at the tail of the list is deleted 
   */
   void DeleteItemT();

   /*
   pre: an instance of listT exists and is not empty
   post: contents of list nodes are displayed on subsequent lines, head to tail. 
   */
   void Print() const;
  
   /*
   pre: an instance of ListT exists and is not empty
   post: returns the number of nodes in the list that store target 
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
   Desc: invoked by DeleteItemT
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

