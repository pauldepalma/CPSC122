#include <iostream>
#include <climits>
using namespace std;

#include "ex34.h"

   
List2::List2()
{
 length = 0;
 
//create dummy nodes;
 head = new doubleNode;
 tail = new doubleNode;

 //set values for head dummy node;
 head->prev = NULL;
 head->item = INT_MIN;
 head->next = tail;

 //set values for tail dummy node;
 tail->prev = head; 
 tail->item = INT_MAX;
 tail->next = NULL;
}

List2::List2(List2* lst)
{
 length = 0; 
 
//create dummy nodes;
 head = new doubleNode;
 tail = new doubleNode;

 //set values for head dummy node;
 head->prev = NULL;
 head->item = INT_MIN;
 head->next = tail;

 //set values for tail dummy node;
 tail->prev = head; 
 tail->item = INT_MAX;
 tail->next = NULL;

 int pos = 1;
 doubleNode* start = lst->FindPosition(pos);

 while (pos < lst->length)
 {
  Insert(start->item,pos);
  start = start->next;
  pos++;
 }  
}

List2::~List2()
{
}

doubleNode* List2::FindPosition(int pos)
{
 doubleNode* cur = head;
 int i = 0;
 while (i < pos - 1)
 {
  cur = cur->next;
  i++;
 }
 return cur;
} 
  
void List2::Insert(itemType item, int pos)
{
 //new node goes between these two nodes
 doubleNode* insertPtA = FindPosition(pos);  
 doubleNode* insertPtB = insertPtA->next; 

 //create new node and set its values
 doubleNode* tmp = new doubleNode; 
 tmp->prev = insertPtA;
 tmp->item = item;
 tmp->next = insertPtB;

 //set pointers for the previous and next nodes
 insertPtA->next = tmp;
 insertPtB->prev = tmp;

 length++;
}

void List2::PrintForward()
{
 doubleNode*  cur = head->next;

 int i = 0;
 while (i < length)
 {
  cout << cur->item << endl;
  cur = cur->next;
  i++;
 }
}
 
