/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex25.h
Header file for a simple linked list  
To Build: g++ ex25Tst.cpp ex25.cpp 
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

class List
{
 public:
   List();
   ~List();

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
   pre: an instance of list exists and is not empty
   post: contents of list nodes are displayed on subsequent lines 
   */
   void Print() const;
  
   /*
   pre:  an instance of list exists and is not empty
   post: returns the position of item if item is in the list, -1 
         otherwise. The position of the head of the list is 0. 
   */
   int Find(const itemType item) const;

   /*
   pre:  an instance of List exists and contains n items.
         pos is in the range [0..n-1]. If a list contained a single item,
	 pos could only be 0. Notice you've alread written a function
         to handle the situation where n = 1;
   post: deletes item at postion, pos. 
   */
   void DeleteItem(const int pos);

 private:
   int length;   //length of the list
   node* head;   //point to the first node on the list 
};
#endif

