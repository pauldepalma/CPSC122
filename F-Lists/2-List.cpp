#include <iostream>
using namespace std;

#include "2-List.h"


//Constructor
List::List()
{       
 length = 0;
 head = NULL;
}
//Destructor
List::~List()
{
 cout << "I'm in the destructor" << endl;
}


void List::PutItemH(itemType itemIn)
{
 node* tmp = new node;
 tmp->item = itemIn;
 tmp->next = head;
 head = tmp;
 length++;
}

void List::Print() const
{
 node* cur = head;
 while(cur != NULL)
  {
   cout << cur->item << endl;
   cur = cur->next;
  }
}
