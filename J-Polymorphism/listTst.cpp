#include <iostream>
using namespace std;

#include "list.cpp"

//lst1 expects 5 command line c-strings
int main(int argc, char* argv[])
{

 List<int>* lst = new List<int>;
 for (int i = 0; i < 5; i++)
  lst->PutItemT(i);
 lst->Print();

 List<char*>* lst1 = new List<char*>;
 lst1->PutItemH(argv[1]);
 lst1->PutItemH(argv[2]);
 lst1->PutItemH(argv[3]);
 lst1->PutItemH(argv[4]);
 lst1->PutItemH(argv[5]);
 lst1->Print();

 delete lst;
 delete lst1;
 return 0;
}
