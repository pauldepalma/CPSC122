
/*
Name : Paul De Palma
Class: CPSC 122, Section 1
Date: January 17, 2021
Assignment: Example 2
Description: Program illustrates fundmental data types and a simple if statement 
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
	
