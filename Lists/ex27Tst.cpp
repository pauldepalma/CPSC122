#include <iostream>
using namespace std;

#include "ex27.h"


int main()
{
 List2* lst = new List2;
 
 for (int i = 1; i <= 10; i++)
   lst->Insert(i,i);

 lst->Insert(11,11);

 cout << "Front To Back" << endl;
 lst->PrintForward();

 cout << "Back To Front" << endl;
 lst->PrintBackwards();
 return 0;

}
