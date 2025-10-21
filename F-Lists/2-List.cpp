#include <iostream>
using namespace std;

#include "2-List.h"


//Constructor
List::List()
{       
 length = 0;
 head = NULL;
}

 List::List (List &LstIn)
{
 //Hint: Traverse LstIn. For each node, keep track of the position and the item.
 //Use Inser (InsertItem(int pos,itemType itemIn) to add copy of what you've just read
 //to the list.  If you wrote Insert correctly, it should keep track of the tail pointer
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
