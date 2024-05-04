#include <iostream>
using namespace std;

#include "list.h"

//Non-recursive functions. 
//I have written them for you.
List::List()
{
 head = NULL;
}

bool List::IsEmpty() 
{
 if (head == NULL)
  return true;
 return false; 
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
 cur == NULL;
}

//Write the following functions recursively or in such a way that they use
//recursive functions. There is a pattern in the pairing of the functions.  

void List::Print( )
{}

void Print(node* cur)
{}

void List::PrintRev( )
{}

void PrintRev(node* cur)
{}

int List::GetLength()
{ return 0;}

int GetLength(node* cur)
{ return 0;}

List::~List()
{}

void Destructor(node* cur)
{
 cout << "Destructor is running" << endl;
}
