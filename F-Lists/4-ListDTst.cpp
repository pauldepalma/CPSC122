#include <iostream>
using namespace std;

#include "4-ListD.h"

//All tests are separated by function
void TestInsert();
void TestCopyConstructor();

int main()
{
 TestInsert();
 //TestCopyConstructor();
}



void TestInsert()
{

 ListD* lst = new ListD;
 for (int i = 1; i <= 5; i++)
  lst->Insert(i,i);
 lst->PrintForward();

 //test general case insert
 cout << "Passed Insert Test 1 if 1 through 5 appear on subsequent lines" << endl;
 lst->PrintForward();
 cout << endl;

 //test insert at the head
 lst->Insert(0,1);
 cout << "Passed Insert Test 2 if 0 appears in position 1" << endl; 
 lst->PrintForward();
 cout << endl;

 //test insert at the tail 
 lst->Insert(100,7);
 cout << "Passed Insert Test 3 if 100 appears in final position" << endl; 
 lst->PrintForward();
 cout << endl;
 
 //test insert in middle 
 lst->Insert(50,5);
 cout << "Passed Insert Test 4 if 50 appears in middle position" << endl; 
 lst->PrintForward();
 cout << endl;
 //delete lst;
}

void TestCopyConstructor()
{
 ListD* lst1 = new ListD;
 for (int i = 1; i <= 3; i++)
  lst1->Insert(i,i);

 ListD* lst2(lst1);
 
 cout << "Traverse lst1" << endl;
 lst1->PrintForward();
 cout << endl;
 cout << "Traverse lst2" << endl;
 lst2->PrintForward();

 //delete lst1;
 //delete lst2;
}
