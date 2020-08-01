
/*
Class: CPSC 122
Section: 01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: CForLoop.java
Program illustrates a for loop 
To Build: javac CForLoop.java
To Execute: java CForLoop 
*/

import java.util.Scanner;

public class CForLoop 
{
  public static void main(String[] args)
  {
    int howMany;

    Scanner keyboard = new Scanner(System.in);


    System.out.println("How many integers do you want to see?");
    howMany = keyboard.nextInt();

    for (int i = 0; i < howMany; i++)
      System.out.println(i);

  }
} 
	
