#include "ex23.h"
#include <iostream> 
using namespace std;

int main(int argc, char* argv[])
{
 MyString str1(argv[1]); //causes the constructor to run
 str1.myDisplay();
 if (str1.FindChar('L'))
  cout << "Found" << endl; 
 return 0;  //destructor runs again because str1 goes out of scope
}
   
  
