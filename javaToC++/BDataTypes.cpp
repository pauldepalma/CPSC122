//This line is a comment
//Header information like below goes at the top of your programs

/*
Class: CPSC 122
Section: 01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: BDataTypes.cpp
Program illustrates fundmental data types and a simple if statement 
To Build: g++ BDataTypes.java
To Execute: ./a.ouut 
*/

#include <iostream>
#include <math.h>  //necessary for pow(base,exp), below
using namespace std;

int main()
  {
   int distance_to_sun = 94359000;
   double sun_E_notation = 9.4359E7;
   string str = "Various Items";
   cout << "Here are " << str << '\n';
   cout << "Distance to the sun: " <<  distance_to_sun <<  " miles" << endl;
   cout << "Distance to the sun: " <<  sun_E_notation  <<  " miles" << endl;

   double pi = 3.14156;
   double area;
   double radius =  2.0;
   area = pi * radius * radius;
   cout << area << endl;
   area = pi * pow(radius,2.0); //pow(base,exponent)
   cout << area << endl;

   char ch = 'A';
   ch++;  //a character is an 8 bit int 
   cout << ch << endl;
   cout << ch + 1 << endl; //as this output shows

   bool cs_is_fun = true;
   if (cs_is_fun)
     cout << "Computer Science is Fun" << endl;

   return 0;

}
	
