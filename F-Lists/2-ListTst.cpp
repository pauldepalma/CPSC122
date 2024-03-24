#include <iostream>
using namespace std;

#include "2-List.h"

int main()
{
 List lst1;

 //This is example Test code
 cout << "Test PutItemH and Print" << endl;
 cout << "Correct if output is 4, 3, 2, 1, 0 on subsequent lines" << endl;
 for (int i = 0; i < 5; i++)
   lst1.PutItemH(i);
 lst1.Print();

 cout << endl;
 return 0;
}
