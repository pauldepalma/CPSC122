/*
Class: CPSC 122
Section: 01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex7.java
Program illustrates command line arguments
arrays, random numbers, global constants
To Build: javac ex7.java
To Execute: java ex7 
*/

import java.util.Scanner;
import java.util.Random;
import java.lang.Integer;

public class ex7 
{
  public static void main(String[] args)
  {
    System.out.println("Total number of command line arguments: " + args.length); 
    for (int i = 0; i < args.length; i++)
      System.out.println("Argument " + i + ": " + args[i]);
  }

}
