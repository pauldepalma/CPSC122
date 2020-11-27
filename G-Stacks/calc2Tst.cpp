#include <iostream>
using namespace std;

#include "calc2.h"

int main(int argc, char* argv[])
{
 Calc* C = new Calc(argc, argv);
 C->DisplayInFix();
 C->DisplayPostFix();
 cout << C->Evaluate() << endl;

 delete C;
 return 0;
}
