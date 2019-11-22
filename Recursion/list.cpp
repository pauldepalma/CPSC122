#include <iostream>
using namespace std;

#include "list.h"

List::List()
{
 head = NULL;
}

//write this using GetLength
List::~List()
{
}

bool List::IsEmpty() 
{
 return true;
}

//write this so that it traverses the list recursively, counting nodes
int List::GetLength() 
{
 return 0;
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


//Write the next 4 functions recursively
void List::Print( )
{
}

void List::Print(node* cur) 
{
}
//Write the next 4 functions recursively
void List::PrintR( )
{
}

void List::PrintR(node* cur) 
{
}
