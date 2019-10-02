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
  

 private:
   int length;   //length of the list
   node* head;   //point to the first node on the list 
};
#endif

