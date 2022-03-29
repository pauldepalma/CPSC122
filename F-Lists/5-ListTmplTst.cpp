#include <iostream>
using namespace std;

#include "5-ListTmpl.cpp"

int main()
{
 List<int>* lst = new List<int>;
 for (int i = 0; i < 5; i ++)
   lst->PutItemH(i);
 lst->Print();
 cout << endl;

 List<string>* lst1 = new List<string>;
 lst1->PutItemH("To see what my black hen hath laid.");
 lst1->PutItemH("Gentlemen come every day");
 lst1->PutItemH("She lays eggs for gentlemen.");
 lst1->PutItemH("Higgledy, piggledy my black hen.");
 lst1->Print();

 return 0;
}
