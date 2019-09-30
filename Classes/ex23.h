#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
 public:

   /*
   Pre: strIn is a null-terminated array of characters
   Post: An instance of Mystring is created and set to the contents of strIn
   */ 
   MyString(char const* strIn);

   /*
   Pre: An instance of MyString exists 
   Post: Invoked automatically when MyString goes out of scope
         Dynamically allocated memory is returned to the heap. 
   */ 
   ~MyString();

   /*
   Pre: an instance of MyString exists
   Post: Contents of the instance of myString is displayed on the screen
   */ 
   void myDisplay(); 

   /*
   Pre: an instance of MyString exists whose lengthe <= length of strIn
   Post: the contents of strIn overwrites the contents of the instance
         of MyString
   */
   void myStrcpy(char const* strIn);  

   /*
   Pre: an instance of MyString exists
   Post: returns 1 if the strings are equivalent, false otherwise 
   */
   bool isEqual(char const* strIn); 

   /*
   Pre: an instance of MyString exists
   Post: if strIn is a substring of the instance of MyString, returns
         its starting positon, -1 otherwise
   */
   bool find(char const* strIn); 
   
 private: 
   char* str; 
   int length;
}; 
#endif

