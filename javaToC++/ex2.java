//This line is a comment
//Header information like below goes at the top of your programs

/*
Class: CPSC 122
Section: 01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex2.java
Program illustrates fundmental data types 
To Build: javac ex2.java
To Execute: java ex2 
*/

import java.lang.Math;

public class ex2 
{
  public static void main(String[] args)
  {
   int distance_to_sun = 94359000;
   double sun_E_notation = 9.4359E7;
   String str = "Various Items";
   System.out.println("Here are " + str);
   System.out.println("Distance to the sun: " + distance_to_sun + " miles"); 
   System.out.println("Distance to the sun: " + sun_E_notation + " miles"); 
   
   double pi = 3.14156;
   double radius = 2.0;
   double area;
   area = pi * radius * radius;
   System.out.println(area);
   area = pi * Math.pow(radius,2.0);
   System.out.println(area);


   char ch = 'A';
   ch++;
   System.out.println(ch);
   System.out.println(ch + 1);

   boolean cs_is_fun = true;
   if (cs_is_fun)
     System.out.println("Computer Science is Fun");

  }
} 
	
