//Queue using List and composition 
#include <iostream>
#include <cstring>
using namespace std;
#include "queue3.h"

template <typename T>
PQueue<T>::PQueue() : Queue<T>()
{
 //constructor inherited from queue 
}

template <typename T>
void PQueue<T>::Enqueue(T newItem, int pty)
{ 
 //Insert at head 
 if (this->IsEmpty())
 {
  this->PutItemH(newItem);
  this->head->pty = pty;
 }

 //Insert at tail 
 if (newItem > this->GetItemT())
 {
  this->PutItemT(newItem);
  this->tail->pty = pty;
 }
}

template <typename T>
node<T>* PQueue<T>::PtrTo(T newItem)
{
 return NULL;
}
	
