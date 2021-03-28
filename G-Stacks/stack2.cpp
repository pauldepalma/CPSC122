//Stack implemented using List and inheritance
#include <iostream>
using namespace std;

#include "stack2.h"

Stack::Stack() : List()
{
 cout << length << endl;
}


void Stack::Push(itemType newItem)
{ 
 PutItemH(newItem);
}

void Stack::Pop()
{
 DeleteItemH();
}

itemType Stack::Peek()
{
 return GetItemH(); 
}


