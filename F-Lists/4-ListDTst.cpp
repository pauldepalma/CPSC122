#include <iostream>
using namespace std;

#include "4-ListD.h"

//All tests are controlled by a dedicated function
void TestInsert();
void TestCopyConstructor();

int main()
{
 //TestInsert();
 TestCopyConstructor();
}



void TestInsert()
{

 ListD* lst = new ListD;
 for (int i = 1; i <= 5; i++)
  lst->Insert(i,i);

 cout << "test general case insert" << endl;
 cout << "Passed Insert Test 1 if 1 through 5 appear on subsequent lines" << endl;
 lst->PrintForward();
 cout << endl;

 cout << "test insert at the head" << endl;
 lst->Insert(0,1);
 cout << "Passed Insert Test 2 if 0 appears in position 1" << endl; 
 lst->PrintForward();
 cout << endl;

 cout << "test insert at the tail" << endl; 
 lst->Insert(100,7);
 cout << "Passed Insert Test 3 if 100 appears in final position" << endl; 
 lst->PrintForward();
 cout << endl;
 
 cout << "test insert within the list" << endl; 
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

 cout << "Test Copy Constructor" << endl; 
 cout << "Test passed if copy is indentical to initial list" << endl; 
 cout << "Traverse inital list" << endl;
 lst1->PrintForward();
 cout << endl;
 cout << "Traverse copy" << endl;
 lst2->PrintForward();

 //delete lst1;
 //delete lst2;
}
