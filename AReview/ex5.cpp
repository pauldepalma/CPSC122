/*
Class: CPSC 122-01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex5.cpp
Program illustrates size in bytes of various data types 
To Build: g++ ex5.cpp -o example5
To Execute: ./example5
*/

#include <iostream>
using namespace std;

struct dog
{
 string name;
 int weight;
};

int main()
{
 int x;
 cout << "size of an integer on the VM is : ";
 cout << sizeof(x);
 cout << " bytes" << endl;

 char y;
 cout << "size of a character on the VM is : ";
 cout << sizeof(y);
 cout << " bytes" << endl;

 double z;
 cout << "size of a double on the VM is : ";
 cout << sizeof(z);
 cout << " bytes" << endl;
 
 float a;
 cout << "size of a float  on the VM is : ";
 cout << sizeof(a);
 cout << " bytes" << endl;

 string b;
 cout << "size of a string  on the VM is : ";
 cout << sizeof(b);
 cout << " bytes" << endl;


 dog e;
 cout << "size of a struct dog on the VM is : ";
 cout << sizeof(e);
 cout << " bytes" << endl;

 char* c;
 cout << "size of a pointer to char  on the VM is : ";
 cout << sizeof(c);
 cout << " bytes" << endl;

 char* d;
 cout << "size of a pointer to string  on the VM is : ";
 cout << sizeof(d);
 cout << " bytes" << endl;

 char* f;
 cout << "size of a pointer to struct dog  on the VM is : ";
 cout << sizeof(f);
 cout << " bytes" << endl;

}  

