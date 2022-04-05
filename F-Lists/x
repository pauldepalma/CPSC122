#include <iostream>
using namespace std;

#include "2-List.h"

int main()
{
 //Static list 
 List lst;
 for (int i = 0; i < 5; i++) 
   lst.PutItemH(i);
 lst.Print();
 cout << endl;
 lst.DeleteItemH();
 cout << endl;
 lst.Print();
 cout << endl;

 //Dynamic list 
 List* lst1 = new List;
 for (int i = 0; i < 5; i++)
   lst1->PutItemH(10*i);
 lst1->Print();
 cout << endl;
 lst1->DeleteItemH();
 cout << endl;
 lst1->Print();

 delete lst1; //necessary to invoke destructor on dynamic list
 cout << endl;
 return 0;
}
