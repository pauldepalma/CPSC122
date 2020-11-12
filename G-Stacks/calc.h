/*
Class: CPSC 122-0X
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: calc.h
To Execute: ./calc "(73 + 1020)"
*/

#ifndef CALC
#define CALC

#include "stack2.h"

class Calc 
{ 
  public: 
  /* 
  pre: none 
  post:
       Design/Code/Test in this order: 
       1. inFix points to newly allocated memory holding infix expression
       2. MakeInFix() (see private functions, below) has been invoked 
       4. CheckTokens() has been invoked.  If it returns false, display a 
          message and exit the program.  
  */
  Calc(int argcIn, char* argvIn[]);

  ~Calc();

  /*
  pre: instance of Calc exists. 
  post: infix expression displayed
 */
  void DisplayInFix();

  /*
   pre:  instance of calculator exists and all input tokens are legal
   post: Using the stack technique discussed in class, returns true 
         if parentheses are balanced, false otherwise
  */
  bool CheckParens();

 private:
  /*
  pre:  invoked from constructor 
  post: returns true if all characters in the infix expression are legal,
        false otherwise.   Legal characters are ')', '(', '+','-','*','/',
        'A' ... 'Z'   
  */
  bool CheckTokens(); 

  /*
  pre:  invoked from constructor 
  post: transforms, for example, ((17 * 12) + 17) to ((A * B) + C).
        26 position symbolTble--see below--looks like this:

        17
        12
        17
         0
         0
        ...
         0
        where the alphabetic characters in the transformed infix expression are
	indices into the symbol table.
  */
  void MakeInFix(); 

  char*  inFix;     //null-terminated string that holds infix expression 
  int*   symbolTble; //pointer to hash table holding expression values
};
#endif 
