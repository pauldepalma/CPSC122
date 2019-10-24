//Stack implemented using a List and composition

#ifndef STACK_H
#define STACK_H
 
#include "list.h"

class Stack 
{
 public:
   Stack();
 
   ~Stack();

   /*
   pre: an instance of stack exists
   post: true if stack is empty, false otherwise
   */ 
   bool IsEmpty();

   /*
   pre: an instance of stack exists
   post: newItem is at the top of the stack 
   */
   void Push(itemType newItem);

   /*
   pre: an instance of stack exists and is not empty
   post: top of the stack has been removed 
   */
   void Pop();

   /*
   pre: an instance of stack exists and is not empty
   post: returns the top of the stack. stack is undisturbed 
   */
   itemType Peek();

   /*
   pre: an instance of stack exists and is not empty
   post: each item from the stack is displayed on subsequent lines 
   */
   void Print();

 private:
   List* lst;   //points to the first node on the list implementing the stack 
};
#endif

