#include<iostream>
using namespace std;

//Virtual Function Example
//Experiment by changing what is included
//#include "VHeader.h"
#include "nonVHeader.h"

PlainBox::PlainBox()
{}

PlainBox::PlainBox(string itemIn)
{
 setItem(itemIn); 
}

void PlainBox::setItem(string itemIn)
{
 item = itemIn;
}

string PlainBox::getItem()
{
 return item;
}




//Magic Box retains the first item stored
MagicBox::MagicBox()
{}

MagicBox::MagicBox(string itemIn)
{
 firstItemStored = false;
 setItem(itemIn);
}

void MagicBox::setItem(string itemIn)
{
 if (!firstItemStored)
 {
  PlainBox::setItem(itemIn);
  firstItemStored = true;
 }
}
 
int main()
{
/*
 //Base Class Test, non-polymorphic
 //Output: Jack of Spades 
 PlainBox* p = new PlainBox("Queen of Hearts");
 cout << p->getItem() << endl;
 p->setItem("Jack of Spades");
 cout << p->getItem() << endl;
 //Derived Class Test, non-polymorphic
 //Output: Queen of Hearts 
 MagicBox* m = new MagicBox("Queen of Hearts");
 m->setItem("Jack of Spades");
 cout << m->getItem() << endl;
//Polymorphic Test Case 1
//setItem in PlainBox is non-virtual
//Output: Jack of Spades
//Reason: p1 is of type PlainBox though it points to MagicBox
 */
//
//Polymorphic Test Case 2 
//setItem in PlainBox is virtual
//Output: Queen of Hearts 
//Reason: though p1 is of type PlainBox, it points to MagicBox, something determined
//at run-time. Virtual base class function is overridden by derived class function
//of the same name in cases like this. 
 PlainBox* p1;
 MagicBox m1("Queen of Hearts");
 p1 = &m1;
 p1->setItem("Jack of Spades"); 
 cout << p1->getItem() << endl;
}
