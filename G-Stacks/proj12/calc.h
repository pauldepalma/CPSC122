
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
  post: 26 position valueTbl is dyanically allocated and filled with zeroes  
        valueIdx is set to 0
  */
  void MakeValueTbl(); 
  
  /*
  pre:  invoked from constructor 
  post: 1. space for inFix expression is dynamically allocated 
        2. infix is a copy of argv[1] except:
           Beginning with 'A' Upper case alphabetic characters for substituted for digit 
	   strings. Numbers corresponding to digit strikngs are stored in valueTbl. 
	   valueIdx is appropriately incremented. 

           Example: (322+12) becomes (A+B)
	            valueTbl becomes: [322 12 0 0 0 ... 0] 
		    valueIdx becomes 2, the next available position in valueTbl
		    Notice that when the ASCII value of an  operand in inFix is
		    substracted from the operands, we get the get the index
		    to the value of the operand stored in the value table.
		    So, for the second operand above, 'B' - 'A' = 1
		    valuTbl[1] == 12

	  This function invokes FindLast, below. 
          Imagine traversing argv[1] until you 
          see a digit.  You need to find the last digit in the sequence.  The 
          collection of such digits can be transformed to an integer and stored
          in valueTable.  FindLast returns the index of the last digit in 
          the current digit string being examined.
  
          Example: (912+12)
          Suppose current index = 1, meaning we are looking digit '9'.  FindLast,
          below, returns, 3, meaning the last digit in the current digit string is 2.	  
  */
  void Parse();

  /* 
   pre:  invoked from Parse 
   post: Returns the index of the final digit in a digit string.  See Parse, above. 
  */ 
  int FindLast(int cur);
  
  /* 
   pre:  invoked from constructor
   post: Using the stack technique discussed in class, returns true 
         if parentheses are balanced, false otherwise
  */
  bool CheckParens();

  char*  inFix;     //null-terminated string that holds infix expression 
  int*   symbolTbl; //pointer to an array holding UC alpha characters 
  char*  valueTbl;  //pointer to an array holding expression values
  int valueIdx; //index of the next available position in valueTbl
  Stack* stk;
};
#endif 
