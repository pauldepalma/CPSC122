#include <iostream>
using namespace std;

#include "list.h"


int main()
{
 List* lst1 = new List;
 for (int i = 0; i < 5; i++)
  lst1->PutItemH(i);
 lst1->Print();
 lst1->PrintRev();

 delete lst1; 
 return 0;
}
