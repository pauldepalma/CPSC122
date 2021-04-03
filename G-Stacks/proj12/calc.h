
/*
Name: Paul De Palma
Class: CPSC 122, Section 1
Date Submitted: February 25, 2021
Assignment: N/A 
Description: Part 1 of Calculator Assignment 
To Compile: make
To Execute: ./calc "(121+12)"
*/


#ifndef CALC
#define CALC

#include "stack2.h"

class Calc 
{ 
  public: 
  /* 
  pre: an istance of Cals exists 
  post: dynamically declared memory is returned to the run-time stack 
  */
  Calc(int argcIn, char* argvIn[]);

  /* 
  pre: an istance of Cals exists 
  post: dynamically declared memory is returned to the stack 
  */
  ~Calc();

  /*
  pre: instance of Calc exists 
  post: constructed infix expression is displayed
 */
  void DisplayInFix();

 private:
  /*
  pre:  invoked from constructor 
  post: returns true if each character is argv[1] is:
        either: one of the four arithmetic operators
        or: an upper case alphabetic character
        or: a character digit (0..9)
        or: a left or right parenthsis
        returns false otherwise	
  */ 
  bool  CheckTokens();

  /*
  pre:  invoked from constructor 
  post: two dynamically allocated tables are allocated. valueTbl holds 26 zeroes.  
        symbolTbl holds 'A' through 'Z'

        valueTbl: [0 0 0 ... 0]
        symbolTbl: ['A' 'B' 'C' ... 'Z']
  */
  void MakeTables(); 
  
  /*
  pre:  invoked from constructor 
  post: 1. space for inFix expression is dynamically allocated 
        2. infix is a copy of argv[1] except:
           characters from symbolTbl are substituted for numbers
           corresponding numbers are stored in value table

           Example: (122+12) becomes (A+B),  where A, B are the first two entries
	   in symbolTbl
	   valueTbl becomes: [122 12 0 0 0 ... 0] 
  */
  void Parse();

  /*
   pre:  invoked from constructor
   post: Using the stack technique discussed in class, returns true 
         if parentheses are balanced, false otherwise
  */
  bool CheckParens();

  char*  inFix;     //null-terminated string that holds infix expression 
  int*   symbolTbl; //pointer to an array holding UC alpha characters 
  char*  valueTbl;  //pointer to an array holding expression values
  Stack* stk;
};
#endif 
