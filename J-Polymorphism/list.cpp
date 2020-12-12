#include <iostream>
using namespace std;

#include "list.h"

template <typename T>
List<T>::List()
{
 length = 0;
 head = NULL;
 tail = NULL;
}

template <typename T>
List<T>::~List()
{
 while(length > 0)
   DeleteItemH();
}

template <typename T>
bool List<T>::IsEmpty() const
{
 if (length == 0)
  return true;
 return false;
}

template <typename T>
int List<T>::GetLength() const
{
 return length;
}

template <typename T>
T List<T>::GetItemH() const
{
 return head->item;
}

template <typename T>
T List<T>::GetItemT() const
{
 return tail->item;
}

template <typename T>
void List<T>::PutItemH(const T newItem)
{
 node<T>* newNode = new node<T>;
 newNode->item = newItem; 
 newNode->next = head;
 head = newNode;
 if (length == 0)
   tail = newNode;
 length++;
}


template <typename T>
void List<T>::DeleteItemH()
{
 node<T>* cur;
 cur = head;
 head = cur->next;
 cur->next = NULL;
 length--;
 if (length == 0)
   tail = NULL;
 delete cur;
 cur = NULL;
}

template <typename T>
void List<T>::Print() const
{
 node<T>* cur = head;
 while (cur != NULL)
  {
   cout << cur->item << endl;
   cur = cur->next;
  }
}

template <typename T>
void List<T>::PutItemT(const T newItem)
{
 if (IsEmpty())
  PutItemH(newItem);
 else
 {
  node<T>* newNode = new node<T>;
  newNode->item = newItem;
  newNode->next = NULL;; 
  tail->next = newNode;
  tail = newNode; 
  length++;
 }
}
