#include <iostream>
using namespace std;

#include "4-ListD.h"

void TestInsert();

int main()
{
 TestInsert();
}

void TestInsert()
{

 ListD* lst = new ListD;
 for (int i = 1; i <= 6; i++)
  lst->Insert(i,i);

 //test general case insert
 cout << "Passed Insert Test 1 if 1 through 6 appear on subsequent lines" << endl;
 lst->PrintForward();
 cout << endl;

 //test insert at the head
 lst->Insert(0,1);
 cout << "Passed Insert Test 2 if 0 appears in position 1" << endl; 
 lst->PrintForward();
 cout << endl;

 //test insert at the tail 
 lst->Insert(100,8);
 cout << "Passed Insert Test 3 if 100 appears in final position" << endl; 
 lst->PrintForward();
 cout << endl;
 
 //test insert in middle 
 lst->Insert(50,5);
 cout << "Passed Insert Test 4 if 50 appears in middle position" << endl; 
 lst->PrintForward();
 cout << endl;
 
 delete lst;
}

