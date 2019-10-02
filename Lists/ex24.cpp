/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex24.cpp
Illusrates a struct  
To Build: g++ ex24.cpp 
To Execute: ./a.out
*/
#include <iostream>
#include <string>
using namespace std;


struct dog
{
 string name;
 int age;
};

int main()
{
 dog myDog;
 myDog.name = "Mazel";
 myDog.age = 13;

 dog* myDog1 = new dog;
 myDog1->name = "Rosie";
 myDog1->age = 2;

 cout << myDog.name << endl;
 cout << myDog1->name << endl;

 return 0;
}
