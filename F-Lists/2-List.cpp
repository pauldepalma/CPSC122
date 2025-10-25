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
//put your code here
}

void List::PutItemH(itemType itemIn)
{
 node* tmp = new node;
 tmp->item = itemIn;
 tmp->next = head;
 head = tmp;
 if (IsEmpty())
   tail = head;
 length++;
}

bool List::IsEmpty()
{
  if (length == 0)
    return true;
  return false;
}

void List::Print()
{
 node* cur = head;
 while(cur != NULL)
  {
   cout << cur->item << endl;
   cur = cur->next;
  }
}

