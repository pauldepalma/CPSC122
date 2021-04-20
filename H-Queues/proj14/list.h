
/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 25, 2021
Header file for a linked list with:
1) The capacity to manipulate the tail
2) The capacity to manipulate the head
3) The capacity to make a copy of a list with a the copy constructor
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
   use: copies what lst points to the list being created
   pre: an instance of what lst points to exists
   post: the list created with the constructor contains the contents of
         what lst points to
   */
   List(List* lst);

   /*
   use: destructor, invoked when the List goes out of scope
   pre: an instance of List exists
   post: memory for all nodes in List have been returned to the heap
   */
   ~List();

   /*
   use: reports on the empty status of a list
   pre: an instance of the list  exists
   post: returns true if list is empty, false otherwise
   */
   bool IsEmpty() const;

   /*
   use: reports the length of a list
   pre: an instance of list exists
   post: returns length of the list
   */
   int GetLength() const;

   /*
   use: returns the contents of the head of the list
   pre: an instance of list exists and is not empty
   post: Returns the contents of the head of the list.
   */
   itemType GetItemH() const;

   /*
   use: stores an item at the head of the list 
   pre: an instance of list exists
   post: Argument is at the head of the list 
   */
   void PutItemH(itemType itemIn);

   /*
   use: deletes the head of the list
   pre: an instance of list exists and is not empty
   post: head of the list is deleted, memory is returned to the heap
   */
   void DeleteItemH();

   /*
   use: adds an item to the tail of the list
   pre: an instance of list exists
   post: newItem is at the tail of the list
   */
   void PutItemT(itemType newItem);

   /*
   use: returns the contents of the tail of the list
   pre: an instance of list exists and is not empty
   post: Returns the contents of the tail of the list.
   */
   itemType GetItemT() const;

   /*
   use: deletes the tail of the list
   pre: an instance of list exists and is not empty
   post: tail of the list is deleted and memory is returned to the heap
   */
   void DeleteItemT();

   /*
   use: displays the contents of the list on the screen
   pre: an instance of list exists and is not empty
   post: contents of list nodes are displayed on subsequent lines
   */
   void Print() const;


 protected:
   int length; //length of the list
   node* head; //points to the first node on the list
   node* tail; //points to the last node on the list
};
#endif
