#include "ex23.h"
#include <iostream> 
using namespace std;

int main(int argc, char* argv[])
{
 MyString str1(argv[1]); //causes the constructor to run
 str1.myDisplay();

 MyString* str2 = new MyString(argv[2]);
 str2->myDisplay();
 delete str2; //causes the destructor to run
 return 0;  //destructor runs again because str1 goes out of scope
}
   
  
