#include <iostream>
using namespace std;

#include "3-ListT.h"

ListT::ListT()
{
 head = NULL;
 tail = NULL;
 length = 0;
}

ListT::~ListT()
{
 cout << "I'm in the desctructor" << endl;
}

void ListT::PutItemH(itemType item)
{
 length = 0;
 node* tmp = new node;
 tmp->item = item;
 tmp->next = head;

 head = tmp; 
 if (length == 0)
  tail = tmp;  
 length++;
}

void ListT::Print() const
{
 node* cur = head;
 while(cur != NULL)
 {
  cout << cur->item << endl;
  cur = cur->next;
 }
}
