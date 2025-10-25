
/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: 10/19/2025 
Assignment: 7 
Description: Adds six functions and a tail pointer to 1-list.h
   List(List &ListIn), the copy constructor. The new class is a copy of ListIn
   int InsertItem(int pos,itemType), a function that inserts a node at a particular position 
   int DeleteItem(const itemType target), a function that deletes all items in a list
   
   //These are done using the tail pointer.  
   void PutItemT(const itemType itemIn);
   itemType GetItemT() const;
   void DeleteItemT();
   
   Adds a tail pointer that is NULL if the list is empty, else  points to the last node in the list.
   Notice that if the list is empty, PutItemT and PutItemH are identical, but the current PutItemH 
   to be modified to account for the tail pointer.
   
   Write the functions in this order:
   GetItemT, PutItemT, DeleteItemT, InsertItemT, DeleteItemT, Copy constructor.
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
   pre: None. This is a constructor function, invoked like this from the 
        the client program: 
        List lst;
	or
	List* lst1 = new List;
   post: an instance of List exists
   */ 
   List();
   
   /*
   Desc: This is an overloaded constructor function.  A list is passed in by reference. The list being 
         constructed is a copy of that reference list.
   pre: An instance of ListIn exists
   post: List is created and is a copy of ListIn
   */
   List(List &LstIn);
   
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
   
   //Tail-Related Functions
    /*
   Desc: Uses tail pointer to perform the insertion. List traversal not necessary. 
   pre: an instance of listT exists
   post: node containing itemIn is at the tail of the list 
   */ 
   void PutItemT(itemType itemIn);

   /*
   Desc: Uses tail pointer to perform the retrieval. List traversal not necessary. 
   pre: an instance of list exists and is not empty
   post: Returns the contents of the node at the tail of the list. 
   */
   itemType GetItemT();

   /*
   Desc: Uses tail pointer to perform the retrieval. List traversal not necessary. 
   See PtrTo among the private functions.  It will help you write this function. 
   pre: an instance of list exists and is not empty
   post: node at the tail of the list is deleted 
   */
   void DeleteItemT();
   
   
   //General operations on List,  starting with the easiest  
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

   /*
   Desc: See delNode among the private functions. It will help remove some of the complexity of this
   function. 
   pre:  an instance of List exists and is not empty 
   post: deletes all nodes that store target.  Returns
         the number of nodes deleted 
   */
   int DeleteItem(itemType target);

   /*
   pre:  an instance of List exists. Pos indicates the position of the node after the insertion
         So if pose = 1, insert befor the head of the list.  
   post: inserts a node anywhere in the list
   */
   void InsertItem(int pos,itemType itemIn);

 private:

 /*
   Desc: Helper function for DeleteItemT
   pre: length of list > 1
   post: returns the address of the node just before the
         node pointed to by the tail
   */
   node* PtrTo();

   /*
   Desc: deletes the node pointed to by the argument. Helper function for DeleteItem
   pre: argument points to the node to be deleted
   post: node pointed to by the argument has been deleted
   */
   void delNode(node* delPtA);

   int length;   //length of the list
   node* head;   //points to the first node on the list 
   node* tail;   //points to the last node in the list
};
#endif

