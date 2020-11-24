/*
Class: CPSC 122-0X
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: calc.h
<<<<<<< HEAD
To Execute: ./calc "(A+B)" 73 22
=======
To Execute: ./calc "(A+B)" 27 32
>>>>>>> 0ff1f42aa7961a49cc7457d0db1b905e78b63a9e
*/

#ifndef CALC
#define CALC

#include "stack2.h"

class Calc 
{ 
  public: 
  /* 
  pre: none 
<<<<<<< HEAD
  post: instance of Calc is created
=======
  post:
       Design/Code/Test in this order: 
       1. inFix points to newly allocated memory holding infix expression
       2. CheckTokens() has been invoked.  If it returns false, display a 
          message and exit the program.  
       3. CheckParens() has been invoked.  If it returns false, display a 
          message and exit the program.  

>>>>>>> 0ff1f42aa7961a49cc7457d0db1b905e78b63a9e
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

<<<<<<< HEAD
  /*
   pre:  invoked from constructor
         and all input tokens are legal 
   post: Using the stack technique discussed in class, returns true 
         if parentheses are balanced, false otherwise
  */
  bool CheckParens();

  char*  inFix;     //null-terminated string that holds infix expression 
=======
  char*  inFix;     //null-terminated string that holds infix expression 
  int*   values;    //pointer to an array holding expression values
  Stack* stk;
>>>>>>> 0ff1f42aa7961a49cc7457d0db1b905e78b63a9e
};
#endif 
