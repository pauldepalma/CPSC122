/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 25, 2021
Assignment: N/A 
Description: simple linked list using templates 
*/


#ifndef LIST_H
#define LIST_H

template <typename T>
struct node
{
 T item;
 node* next;
};

template <typename T>
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
   void PutItemH(const T);

   /*
   pre: an instance of list exists and is not empty
   post: Returns the contents of the head of the list. 
   */
   T GetItemH() const;

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
   pre:  an instance of List exists and contains n items, n >= 1.
   post: returns the position of item if item is in the list, -1 
         otherwise.  
   */
   int Find(const T) const;

   /*
   pre:  an instance of List exists and contains n items, n >= 1; 
   post: item at position, pos is deleted 
	 Notice you've alread written a function to handle the case 
         where n = 1. Make use of it here. 
   */
   void DeleteItem(const int pos);

 private:
   int length;   //length of the List
   node<T>* head;   //point to the first node on the list 
};
#endif

