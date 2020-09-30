#include <iostream>
using namespace std;

#include "list.h"

List::List()
{
 length = 0;
 head = NULL;
 tail = NULL;
}

List::List(List* lst)
{
 length = lst->length;
 node* newLst;  //pointer to the current item in the new list 
 node* origLst = lst->head; //pointer to the current item in the original list
 if (origLst != NULL)
  {
   head = new node; //set head pointer of the the new list
   newLst = head;
  }
 else
  head = NULL;

 //traverse the original, copying each node to the new list
 while (origLst != NULL)
  {
   newLst->item = origLst->item;
   if (origLst->next == NULL)  //at end of original list
     {
      newLst->next = NULL;
      origLst = NULL;
     }
   else    //more to do
   {
    origLst=origLst->next;  
    newLst->next = new node;
    newLst = newLst->next;
   }
  }
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
 return false;
}

int List::GetLength() const
{
 return length;
}

itemType List::GetItemH() const
{
 return head->item;
}

void List::PutItemH(itemType itemIn)
{
 node* newNode = new node;
 newNode->item = itemIn;
 newNode->next = head;
 head = newNode;
 if (length == 0)
   tail = newNode;
 length++;
}


void List::DeleteItemH()
{
 node* cur;
 cur = head;
 head = cur->next;
 cur->next = NULL;
 length--;
 if (length == 0)
   tail = NULL;
 delete cur;
 cur = NULL;
}

	
void List::Print() const
{
 node* cur = head;
 while (cur != NULL)
  {
   cout << cur->item << endl;
   cur = cur->next;
  }
}

void List::PutItemT(itemType itemIn)
{
 if (IsEmpty())
  PutItemH(itemIn);
 else
 {
  node* newNode = new node;
  newNode->item = itemIn;
  newNode->next = NULL;; 
  tail->next = newNode;
  tail = newNode; 
  length++;
 }
}
