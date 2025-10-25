#include <iostream>
using namespace std;

#include "2-List.h"

int main()
{
 List lst1;
 List* lst2 = new List;

 //This is example Test code
 cout << "Static Declaration" << endl;
 cout << "Test PutItemH and Print" << endl;
 cout << "Correct if output is 4, 3, 2, 1, 0 on subsequent lines" << endl;
 for (int i = 0; i < 5; i++)
   lst1.PutItemH(i);
 lst1.Print();

 cout << endl;
 
 cout << "Dynamic Declaration" << endl;
 cout << "Test PutItemH and Print" << endl;
 cout << "Correct if output is 4, 3, 2, 1, 0 on subsequent lines" << endl;
 for (int i = 0; i < 5; i++)
   lst2->PutItemH(i);
 lst2->Print();

//Destructor must be invoked for dynamically declared classes
 delete lst2;

 cout << endl;
 return 0;
}
