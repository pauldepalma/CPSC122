/*
Class: CPSC 122-0X
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: calc.h
To Execute: ./calc "(A+B)" 73 22
*/

#ifndef CALC
#define CALC

#include "stack2.h"

class Calc 
{ 
  public: 
  /* 
  pre: none 
  post: instance of Calc is created
  */
  Calc(int argcIn, char* argvIn[]);

  /* 
  pre: an istance of Cals exists 
  post: dynamically declared memory is returned to the run-time stack 
  */
  ~Calc();

  /*
  pre: instance of Calc exists 
  post: infix expression is displayed
 */
  void DisplayInFix();

 private:
 //MakeInFix, CheckTokens, CheckParens are all invoked from the constructor  
  /*
  pre:  invoked from constructor 
  post: character by character copy of argv[1] is made to dynamically declared inFix
        (see member variables) 
  */
  void MakeInFix(); 
  
  /*
  pre:  invoked from constructor 
  post: returns true if all characters in the infix expression are legal,
        false otherwise.   Legal characters are ')', '(', '+','-','*','/',
        'A' ... 'Z'   
  */
  bool CheckTokens(); 

  /*
   pre:  invoked from constructor
         and all input tokens are legal 
   post: Using the stack technique discussed in class, returns true 
         if parentheses are balanced, false otherwise
  */
  bool CheckParens();

  char*  inFix;     //null-terminated string that holds infix expression 
};
#endif 
