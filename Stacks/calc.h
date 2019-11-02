/*
Class: CPSC 122-0X
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: calc.h
To Execute (option 1): ./calc "(A+B)" 73 1020
To Execute (option 2): ./calc "(73 + 1020)"
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
       Part 1
       1. inFix points to newly allocated memory holding infix expression
       2. inFix expression has been checked for legal tokens
       3. inFix epression has been checked for balanced parentheses
       Part 2
       1. Hash table has been created and loaded (option 1) or plumbing 
          for option 2 has been created.
       2. Memory for postFix has been allocaed
       3. Stack has been created
  */
  Calc(int argcIn, char* argvIn[]);

  ~Calc();

  /*
  pre: instance of Calc exists. 
  post: infix expression displayed
 */
  void DisplayInFix();

  /*
  pre: instance of calculator exists and infix expression has been 
       transformed to postfix
  post: postfix exression displayed 
 */
  void DisplayPostFix();
 
  /*
  pre: instance of calculator exists. 
  post: infix expression transformed to postfix and stored in 
        memory pointed to by the member variable postfix
 */
  void InFixToPostFix();

  /*
  pre: instance of calculator exists. valid postfix expr. has been created
  post: post fix expression has been evaluated and displayed on the screen
 */
  void Evaluate();

 private:
  /*
  pre:  instance of calculator exists
  post: returns true if all characters in the infix expression are legal,
        false otherwise  Legal characters are ')', '(', '+','-','*','/',
        'A' ... 'Z'   
  */
  bool CheckTokens(); 

  /*
   pre:  instance of calculator exists and all input tokens are legal
   post: Using the stack technique discussed in class, returns true 
         if parentheses are balanced, false otherwise
  */
  bool CheckParens();
  
  Stack* stk;  
  char*  inFix;    //null-terminated string that holds infix expression  
  char*  postFix;  //null-terminated string that holds the post-fix
  int*   hashTble; //pointer to hash table holding expression values
                   //necessary for option 1.  An analog is almost 
		   //certainly necessary for option 2.
};
#endif 

