#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
 ofstream stella;
 int age = atoi(argv[1]) + 10;
 cout << age << endl;
 stella.open("inClass.out");

 for (int i = 1; i < argc; i++)
   stella << argv[i] << endl;

 stella.close();
}
