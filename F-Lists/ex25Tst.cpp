#include <iostream>
using namespace std;

#include "ex25.h"


int main()
{
 //Use of a static list 
 List lst;
 for (int i = 0; i < 5; i++)
   lst.PutItemH(i);
 lst.Print();

 //Use of a dynamic list
 List* lst1 = new List;
 for (int i = 0; i < 5; i++)
  lst1->PutItemH(10*i);
 lst1->Print();

 delete lst1; //necessary to invoke destructor on dynamic list
 return 0;
}
