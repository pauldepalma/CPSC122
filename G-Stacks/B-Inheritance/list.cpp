#include <iostream>
#include <iomanip>
using namespace std;

#include "list.h"

List::List()
{
 head = NULL;
 length = 0;
}

List::~List()
{
 while(length > 0)
  DeleteItemH();
}

bool List::IsEmpty() const
{
 if (length == 0)
   return true;
 else
   return false;
}


int List::GetLength() const
{
 return length; 
}

void List::PutItemH(const itemType item)
{
 node* tmp = new node;
 tmp->item = item;
 tmp->next = head;
 head = tmp;
 length++;
 tmp = NULL;
}

itemType List::GetItemH() const
{
 return head->item; 
}

void List::DeleteItemH()
{
 node* cur = head;
 head = head->next;
 delete cur;
 length--;
}
	
void List::Print() const
{
 node* cur = head;
 for (int i = 0; i < length; i++)
 {
  //displays type
  //cout << typeid(cur->item).name() << endl; 
  cout << cur->item << endl;
  cur = cur->next;
 }
}


