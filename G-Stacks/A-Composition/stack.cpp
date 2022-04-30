//Stack using List and composition 
#include <iostream>
using namespace std;

#include "stack.h"

Stack::Stack()
{
 lst = new List;
}

Stack::~Stack()
{
 delete lst;
}

bool Stack::IsEmpty()
{
 if (lst->IsEmpty()) 
    return true;
 else
    return false;
}

void Stack::Push(itemType newItem)
{ 
 lst->PutItemH(newItem);
}

void Stack::Pop()
{
 lst->DeleteItemH();
}

itemType Stack::Peek()
{
 return lst->GetItemH(); 
}
	
void Stack::Print()
{
 lst->Print();
}
