#include <iostream>
using namespace std;

#include "ex34.h"


int main()
{
 List2* lst = new List2;
 
 for (int i = 1; i <= 10; i++)
   lst->Insert(i,i);

 lst->PrintForward();

 cout << endl;
 List2* lst1 = new List2(lst);

 lst->PrintForward();

 return 0;
}
