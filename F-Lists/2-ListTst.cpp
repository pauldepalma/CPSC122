#include <iostream>
using namespace std;

#include "2-List.h"

int main()
{
 List lst;
 List* lst1 = new List;

 cout << "Test Dynamic Insert and Print" << endl;
 cout << "Correct if out is 4, 3, 2, 1, 0 on subsequent lines" << endl;
 for (int i = 0; i < 5; i++)
  {
   lst1->PutItemH(i);
   lst1->Print();
  }

 //delete lst1; //necessary to invoke destructor on dynamic list
 cout << endl;
 return 0;
}
