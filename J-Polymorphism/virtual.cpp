#include <iostream>
using namespace std;

class Base
{
 public:
  virtual void print()
  {
   cout << "print from base class" << endl;
  }

  virtual void show()
  {
   cout << "show from base class" << endl;
  }
};

class Derived: public Base
{
 public:
  void print()
  {
   cout << "print from Derived class" << endl;
  }
    
  void show()
  {
   cout << "show from Derived class" << endl;
  }
};

int main()
{
 Base* bptr;
 Derived d;
 bptr = &d;

 //runtime bind
 cout << "I am a Base pointer but can cause print from Derived to execute " << endl;
 bptr->print();

 //compile time bind
 cout << "I am a Base pointer but can cause show from Derived to execute " << endl;
 bptr->show();
}
