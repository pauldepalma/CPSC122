/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Project Number: 15
Header file for a simple linked list that adds and deletes at the head
All traversals are done recursively, either directly or indirectly
*/


#ifndef LIST
#define LIST

typedef int itemType;

struct node
{
 itemType item;
 node* next;
};

class List
{
 public:
   List();
   ~List();

   /*
   pre: an instance of lists exists
   post: returns true if list is empty, false otherwise
   */ 
   bool IsEmpty();

   /*
   pre: an instance of list exists and is not empty
   post: Returns the contents of the head of the list. 
   */
   itemType GetItemH();

   /*
   pre: an instance of list exists
   post: newItem is at the head of the list 
   */
   void PutItemH(itemType item);

   /*
   pre: an instance of list exists and is not empty
   post: head of the list is deleted 
   */
   void DeleteItemH();

   /*
   pre: an instance of list exists and is not empty
   post: contents of list nodes are displayed on subsequent lines 
   */
   void Print();

   /*
   pre: an instance of list exists and is not empty
   post: contents of list nodes are displayed in reverse  
   */
   void PrintRev();

   /*
   pre: an instance of list exists
   post: returns length of the list by counting the nodes recursively
   */
   int GetLength();
  
 private:
   //Utility function to assist recursive traversal of list 
   void Print(node* cur);
   node* head;    
};
#endif

