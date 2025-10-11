/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: 9/29/2025 
Assignment: N/A 
Description: Program illustrates a simple linked list  
*/

#ifndef LIST_H
#define LIST_H

typedef int itemType;

struct node
{
 itemType item;
 node* next;
};

class List
{
 public:

  //Class-related functions
   /*
   pre: None. This is the constructor function, invoked like this from the 
        the client program: 
        List lst;
	or
	List* lst1 = new List;
   post: an instance of List exists
   */ 
   List();

   /*
   pre: An instance of List exists.  This is the destructor function, automatically
        invoked in the case of a static declaration, explcitly invoked, using the delete
        key word, in the case of a dynamic declaration.	
   post: All dynamically declared memory, i.e., the memory for all nodes, has been
        returned to the heap.   
   */ 
   ~List();

   //Head-related functions
   /*
   pre: an instance of List exists
   post: node containing itemIn is at the head of the list 
   */
   void PutItemH(itemType itemIn);

   /*
   pre: an instance of List exists and is not empty
   post: Returns the contents pointed to by the head of the list 
   */
   itemType GetItemH();

   /*
   pre: an instance of list exists and is not empty
   post: Node pointed to by head is deleted 
   */
   void DeleteItemH();


   //A few easy general functiond  
   /*
   pre: an instance of List exists
   post: returns true if list is empty, false otherwise
   */ 
   bool IsEmpty();

   /*
   pre: an instance of List exists
   post: returns length of the list 
   */
   int GetLength();

   /*
   pre: an instance of list exists and is not empty
   post: contents of list nodes are displayed on subsequent lines, head to tail. 
   */
   void Print();

   /*
   pre: an instance of List exists and is not empty
   post: returns the number of nodes in the list that stores target 
   */
   int Find(itemType target);


   //Tail-Related functions
   /*
   pre: an instance of List exists
   post: node containing itemIn is at the tail of the list 
   */
   void PutItemT(itemType item);

   /*
   pre: an instance of List exists and is not empty
   post: Returns the contents of the node at the tail of the list 
   */
   itemType GetItemT();

   /*
   pre: an instance of list exists and is not empty
   post: Node at the tail of the list is deleted 
   */
   void DeleteItemT();

   //A more interesting general function 
   /*
   pre:  an instance of List exists
   post: inserts a node anywhere in the list, along with its information, 
         using this numbering scheme:
         0 : Before the current head
         1 : After the current head
         2 : After the second node
         ...
         n : After the last node (where n is the number of the last node. 
             If there are 4 nodes, n = 4)
   */
   void InsertItem(int pos,itemType);


 private:
   int length;   //length of the list
   node* head;   //points to the first node on the list 
};
#endif

