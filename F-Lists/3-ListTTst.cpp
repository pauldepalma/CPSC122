#include <iostream>
using namespace std;

#include "3-ListT.h"

int main()
{
 
 ListT lst;
 cout << "Test PutItemH and Print" << endl;
 cout << "Correct if output is 4, 3, 2, 1, 0 on subsequent lines" << endl;
 for (int i = 0; i < 5; i++) 
   lst.PutItemH(i);
 lst.Print();

 cout << endl;
 return 0;
}
