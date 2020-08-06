/*
Class: CPSC 122
Section: 01
Team Member 1: Paul De Palma
Team Member 2: None
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex6.java
Program illustrates 
arrays, random numbers, global constants
To Build: javac ex6.java
To Execute: java ex6 
*/

import java.util.Scanner;
import java.util.Random;
import java.lang.Integer;

public class ex6 
{
  public static void main(String[] args)
  {
    int size = 25;
    int[] stuff = new int[size]; 

    loadArray(stuff,size);
    print(stuff,size);

    System.out.println("Here's the largest random number generated");
    System.out.println(findLargest(stuff,size));


  }

  public static void loadArray(int stuff[], int size)
  {
    Random rands = new Random();

    for (int i = 0; i < size; i++)
      stuff[i] = rands.nextInt(100); //range [0..100]
  } 
	
  public static void print(int myStuff[], int mySize)
  {
    for (int i = 0; i < mySize; i++)
      System.out.println(myStuff[i]);
  }

  public static int findLargest(int stuff[], int size)
  {
    int largest = Integer.MIN_VALUE;
    int idx = 0;

    while (idx < size)
    {
     if (stuff[idx] > largest)
       largest = stuff[idx]; 
     ++idx;
    }
    return largest;
  }
}
