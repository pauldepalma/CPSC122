#include <iostream>
using namespace std;

#include "2-List.h"

List::List()
{       
 length = 0;
 head = NULL;
}


List::~List()
{
}

bool List::IsEmpty() const
{
 return true;
}

int List::GetLength() const
{
 return 0;
}

void List::PutItemH(const itemType newItem)
{
 node* tmp = new node;
 tmp->item = newItem;
 tmp->next = head;
 head = tmp;
 length++;
 tmp = NULL;
}

itemType List::GetItemH() const
{
 return head->item;
}

	
void List::Print() const
{
}

int List::Find(const itemType item) const
{
 return -1;
}

void DeleteItem(const int pos)
{
}

