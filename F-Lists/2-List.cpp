#include <iostream>
using namespace std;

#include "2-List.h"


//Constructor
List::List()
{       
 length = 0;
 head = NULL;
 tail = NULL;
}
//Destructor
List::~List()
{
}


bool List::IsEmpty()
{
  if (length == 0)
    return true;
  return false;
}

void List::PutItemH(itemType itemIn)
{
 node* tmp = new node;
 tmp->item = itemIn;
 tmp->next = head;
 head = tmp;
 if (IsEmpty())
   tail = tmp;
 length++;
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
