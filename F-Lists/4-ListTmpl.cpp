#include <iostream>
using namespace std;

#include "4-ListTmpl.h"

template <typename T>
List<T>::List()
{
 head = new node<T>;
 head = NULL;
 length = 0;
}

template <typename T>
List<T>::~List()
{
}

template <typename T>
void List<T>::PutItemH(T newItem)
{
 node<T>* tmp = new node<T>;
 tmp->item = newItem;
 tmp->next = head;
 head = tmp;
 length++;
}

template <typename T>
bool List<T>::IsEmpty()
{
 if (length == 0)
  return true;
 return false;
}


template <typename T>
int List<T>::GetLength()
{
 return 0;
}


template <typename T>
T List<T>::GetItemH()
{
 return head->item; 
}

template <typename T>
void List<T>::DeleteItemH()
{
}

template <typename T>
void List<T>::Print()
{
 node<T>* tmp = head;
 int ct = 0;
 while (ct < length)
 {
  cout << tmp->item << endl;
  tmp = tmp->next;
  ct++;
 } 
	
}
template <typename T>
int List<T>::Find(T item)
{
 return -1;
}

template <typename T>
void List<T>:: DeleteItem(int pos)
{
}
