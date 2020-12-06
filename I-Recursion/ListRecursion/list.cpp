#include <iostream>
using namespace std;

#include "list.h"


//Non-recursive functions. I have written them for you.
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
 cur == NULL;
}


//Write the following functions recursively or in such a way that they use
//recursive functions


int List::GetLength()
{
 return 0; 
}

int List::GetLength(node* cur, int& ct)
{
 return 0;
}

bool List::IsEmpty() 
{
 return true; 
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

List::~List()
{
}
