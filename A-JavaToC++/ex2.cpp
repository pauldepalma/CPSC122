
/*
Name : Paul De Palma
Class: CPSC 122, Section 1
Date: January 9, 2022
Assignment: Example 2
Description: Program illustrates fundmental data types and a simple if statement 
Notes: See Gaddis, Section for 3.7 for a more complete discussion of formatting
*/

#include <iostream>
#include <math.h>  //necessary for pow(base,exp), below
#include <iomanip> //necessary for setprecision
using namespace std;

const double DISTANCE_TO_SUN = 94359000;
const double DISTANCE_TO_SUN_E = 9.4359E7; 
const double PI = 3.14156;
const double RADIUS = 2.0;

int main()
  {
   string str = "Various Items"; 
   cout << "Here are " << str << '\n';
   cout << "Distance to the sun: " <<  DISTANCE_TO_SUN_E << " miles" << endl; 
   cout.setf(ios::fixed);
   cout <<  setprecision(0);
   cout <<  "Distance to the sun: " <<  DISTANCE_TO_SUN <<  " miles" << endl;

   double area;
   cout <<  setprecision(5);
   area = PI * RADIUS * RADIUS;
   cout << area << endl;
   area = PI * pow(RADIUS,2.0); //pow(base,exponent)
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
	
