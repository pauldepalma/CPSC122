//Queue using List and composition 
#include <iostream>
using namespace std;
#include "queue2.h"

template <typename T>
Queue<T>::Queue() : List<T>()
{
 //constructor inherited queue
}

template <typename T>
void Queue<T>::Enqueue(T newItem)
{ 
 cout << "Queue" << endl;
 this->PutItemT(newItem);
}

template <typename T>
void Queue<T>::Dequeue()
{
 this->DeleteItemH();
}

template <typename T>
T Queue<T>::Peek()
{
 return this->GetItemH(); 
}
