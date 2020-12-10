#include <iostream>
using namespace std;

class Base
{
 public:
  void print()
  {
   cout << "print from base class" << endl;
  }

  void show()
  {
   cout << "show from base class" << endl;
  }
};

class Derived: public Base
{
 public:
  void print()
  {
   cout << "print from derived class" << endl;
  }
    
  void show()
  {
   cout << "show from derived class" << endl;
  }
};

int main()
{
 Base* bptr;
 Derived*  dptr;

 //compile bind
 bptr->print();
 cout << endl;
 
 //compile time bind
 dptr->show();
}
