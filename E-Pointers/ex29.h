#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
 public:

   /*
   Pre:  strIn is a null-terminated array of characters
   Post: An instance of Mystring is created and set to the contents of strIn
   */ 
   MyString(char const* strIn);

   /*
   Pre:  An instance of MyString exists 
   Post: Invoked automatically when a static instance of MyString 
         goes out of scope. Invoked when a dynamic instance of MyString
	 is deleted.  
   */ 
   ~MyString();

   /*
   Pre:  An instance of MyString exists
   Post: Contents of the instance of myString is displayed on the screen
   */ 
   void myDisplay(); 

   /*
   Pre:  An instance of MyString exists whose length <= length of strIn
   Post: The contents of strIn overwrites the contents of the instance
         of MyString pointed to by the member variable str.  str is 
	 terminated by the null character.   
   */
   void myStrcpy(char const* strIn);  

   /*
   Pre:  An instance of MyString exists
   Post: Returns the number of characters, excluding the null character
         in MyString. 
   */
   int myStrlen();  

   /*
   Pre:  An instance of MyString exists. strIn is a null-terminated
         string.
   Post: Returns true if the strings are equivalent, false otherwise 
   */
   bool isEqual(char const* strIn); 

   /*
   Pre:  An instance of MyString exists
   Post: If strIn is a substring of the instance of MyString, returns
         the index of its starting positon, -1 otherwise
   */
   int find(char const* strIn); 

   /*
   Pre:  An instance of MyString exists. strIn is a null-terminated string
   Post: strIn is concatenated with the instance of MyString.  Ex.
         MyString is ABC. strIn is DEF.  MyString is still a null-terminated
	 string, but contains: ABCDEF. 
   */
   void concat();


 private:
   //helper functions for the class

   /*
   pre: idx is the first character of str that matches the substring
        strIn is a null terminated string designated as the substring
   post: returns true if strIn is a substring of str, false otherwise. 
         Used by find()
   */ 
   bool isSub(char const* strIn, int idx); 

   /*
   pre: strIn is a null-terminated string
   post: returns the number of characters in strIn, excluding the null
         character
   */
   int myStrlen(char const* strIn); 

   char* str; //points to a dynamically declared null-terminated 
              //array of characters 
   int length;//number of characters in the array pointed to by str 
}; 
#endif

