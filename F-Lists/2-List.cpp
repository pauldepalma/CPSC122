#include <iostream>
using namespace std;

#include "2-List.h"


//Class-related functions
//Constructor
List::List()
{       
 length = 0;
 head = NULL;
}

//Destructor
List::~List()
{
}

//Head-related functions
void List::PutItemH(itemType item)
{
}

itemType List::GetItemH() const
{
}

void List::DeleteItemH()
{
}


//General operations on the class

void List::Print() const
{
}

bool List::IsEmpty() const
{
 return true;
}



