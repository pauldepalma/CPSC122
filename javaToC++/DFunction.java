/*
Class: CPSC 122
Section: 01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: DFunction.java
Program illustrates 
void function
while loop
modulus
To Build: javac DFunction.java
To Execute: java DFunction 
*/

import java.util.Scanner;

public class DFunction 
{
  public static void main(String[] args)
  {
    int num, cols; 

    Scanner keyboard = new Scanner(System.in);


    System.out.println("How many integers do you want to see?");
    num = keyboard.nextInt();

    System.out.println("Distributed over how many columns");
    cols = keyboard.nextInt();

    display(num,cols);

  }

 public static void display(int num, int cols)
  {
    int ct = 0;
    int rowCt =1;

    while (ct < num)
     {
       System.out.print(ct);
       System.out.print('\t');
       if (ct % cols == cols - 1)
	 System.out.println();
       ct++;
     }
    System.out.println();
  }
} 
	
