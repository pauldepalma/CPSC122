#include <iostream>
using namespace std;

#include "list.h"


int main()
{
 List* lst1 = new List;
 for (int i = 0; i < 5; i++)
  lst1->PutItemH(i);
 lst1->DeleteItemH();
 lst1->Print();

 delete lst1; //necessary to invoke destructor on dynamic list
 return 0;
}
