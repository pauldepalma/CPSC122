#include <iostream>
using namespace std;
//Using classes

#include "ex22.h"

int main()
{
 Rectangle box(5,10);
 cout << box.getArea() << endl;

 box.setWidth(10);
 box.setLength(20);
 cout << box.getArea() << endl;

 return 0;

}
