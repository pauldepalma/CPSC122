/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 25, 2021
Assignment: N/A 
Description: Program illustrates a struct 
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
 myDog.name = "Lily";
 myDog.age = 14;

 dog* myDog1 = new dog;
 myDog1->name = "Rosie";
 myDog1->age = 3;

 cout << myDog.name << endl;
 cout << myDog1->name << endl;

 return 0;
}
