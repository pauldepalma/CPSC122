#include <iostream>
using namespace std;

#include "2-List.h"

int main()
{
 //Use of a static list 
 List lst;
 lst.PutItemH(77);
 cout << lst.GetItemH() << endl;
 for (int i = 0; i < 5; i++) 
   lst.PutItemH(i);
 lst.Print();
 cout << endl;

 //Use of a static list 
 List* lst1 = new List;
 for (int i = 0; i < 5; i++)
   lst1->PutItemH(10*i);
 lst1->Print();
 cout << endl;

 delete lst1; //necessary to invoke destructor on dynamic list
 cout << endl;
 return 0;
}
