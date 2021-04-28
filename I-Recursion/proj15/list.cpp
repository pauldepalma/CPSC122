#include <iostream>
using namespace std;

#include "list.h"


//Non-recursive functions. I have written them for you.
List::List()
{
 head = NULL;
}

bool List::IsEmpty() 
{
 if (head == NULL)
  return true;
 return false; 
}

void List::PutItemH(itemType item)
{
 node* tmp = new node;
 tmp->item = item;
 tmp->next = head;
 head = tmp;
 tmp = NULL;
}

itemType List::GetItemH() 
{
 return head->item; 
}

void List::DeleteItemH()
{
 node* cur = head;
 head = head->next;
 delete cur;
 cur == NULL;
}

//Write the following functions recursively or in such a way that they use
//recursive functions.  You may add recursive utility functions to the 
//private section of the header (.h) file.

List::~List()
{
}

int List::GetLength()
{
 return 0; 
}


void List::Print( )
{
}


void List::PrintRev( )
{
}

void List::Print(node* cur) 
{
}
