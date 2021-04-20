#include <iostream>
using namespace std;

#include "list.h"


int main()
{

 List* lst = new List;
 for (int i = 0; i < 5; i++)
  lst->PutItemT(i);
 lst->Print();

 List* lst1 = new List(lst);

 lst1->Print();
 delete lst;
 delete lst1;
 return 0;
}
