
/*
Class: CPSC 122
Section: 01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: EFunction2.java
Program illustrates 
returning a value from a function
To Build: javac EFunction2.java
To Execute: java EFunction2 
*/

import java.util.Scanner;

public class EFunction2 
{
  public static void main(String[] args)
  {
    int base, exp; 

    Scanner keyboard = new Scanner(System.in);


    System.out.println("Enter a base");
    base = keyboard.nextInt();

    System.out.println("Enter an exponent");
    exp = keyboard.nextInt();

    System.out.print(base + " to the " + exp + " power is: ");
    System.out.println(power(base,exp));

  }

 public static int power(int base, int exp)
  {
    int value = 1; 

    for (int i = 0; i < exp; i++)
      value = value *  base;

    return value;
  }
} 
	
