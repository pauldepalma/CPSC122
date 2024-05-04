/*
Name: Your Name 
Class: CPSC 122, Section 1
Project Number: Project 12 
Header file for a linked list that adds and deletes at the head.
The following functions are to be written recursively, either directly or indirectly:
~List()
Print()
PrintRev()
GetLength()

Notice that there are private member companion functions for each of these among the private
functions.  This should give you a hint as to how to proceed.  
The the recursive C-String functions in .../github/pauldepalma/CPSC122/I-Recursion should help.

Notice also that there is no length variable among the private member varialbles.  You 
may not add one.

You may not alter this file. 
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

   /*
   The destructor function must make use one of the functions below accomplish its task
   of returning memory to the heap. 
   */
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
   int GetLength(node* cur);
   void Print(node* cur);
   void PrintRev(node* cur);
   void Destructor(node* cur);
   node* head;    
};
#endif

