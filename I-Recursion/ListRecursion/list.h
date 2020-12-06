/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: list.h
Header file for a simple linked list that adds and deletes at the head
Traversals are done recursively
To Build: make 
To Execute: ./list
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
   void PrintR();

   /*
   pre: an instance of list exists
   post: returns length of the list by counting the nodes recursively
   */
   int GetLength();
  
 private:
   node* head;   //point to the first node on the list 
   void Print(node* head);
   void PrintR(node* head);
   int GetLength(node* head, int& ct);
};
#endif

