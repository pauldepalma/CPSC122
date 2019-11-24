#include <iostream>
using namespace std;

#include "list.h"


//Non-recursive functions
List::List()
{
 head = NULL;
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
}


//Write the following functions recursively or in such a way that they use
//recursive functions


int List::GetLength()
{
 return 0; //here only so that the template will pass a syntax check
}

int List::GetLength(node* cur)
{
 return 0; //here only so that the template will pass a syntax check
}

//This can not have complexity O(n^2) 
List::~List()
{
}

bool List::IsEmpty() 
{
 return true; //here only so that the template will pass a syntax check
}

void List::Print( )
{
}

void List::Print(node* cur) 
{
}

void List::PrintR( )
{
}

void List::PrintR(node* cur) 
{
}
