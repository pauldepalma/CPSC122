#include <iostream>
using namespace std;

#include "5-ListTmpl.cpp"

int main()
{
 List<int>* lst = new List<int>;
 for (int i = 0; i < 5; i ++)
   lst->PutItemH(i);
 lst->Print();
 cout << "head of list" << endl;
 cout << lst->GetItemH() << endl;

 cout << endl;

 List<string>* lst1 = new List<string>;
 for (int i = 0; i < 5; i ++)
   if (i % 2 == 0)
     lst1->PutItemH("hello");
   else
     lst1->PutItemH("Goodbye");
 lst1->Print();
 cout << "head of list" << endl;
 cout << lst1->GetItemH() << endl;

 return 0;
}
