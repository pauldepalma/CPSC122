#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
 public:

   /*
   Desc: Constructor for MyString. 
   Pre:  strIn is a null-terminated array of characters
   Post: Instance of MyString is created 
   */ 
   MyString(char const* strIn);

   /*
   Desc: Destructor for MyString 
   Invoked automatically when a static instance of MyString 
   goes out of scope. Invoked when a dynamic instance of MyString
   is deleted.  
   Pre: None 
   Output: Dynamically declared memory is returned to the heap 
   */ 
   ~MyString();

   /*
   Desc: Displays the contents of MyString 
   Pre: None
   Post: Contents of MyString are displayed on the screen 
   */ 
   void myDisplay(); 

   /*
   Desc: Overwrites contents of MyString.str with what strIn points to 
   To clarify: nothing of str remains. strIn replaces it entirely
   Pre: strIn is a null-terminated string 
   Post: contents of strIn replaces MyString 
   */
   void myStrcpy(char const* strIn);  

   /*
   Desc: Used to determine the length of MyString.str
   Pre:  An instance of MyString exists
   Post: Returns the number of characters, excluding the null character
         in MyString. 
   */
   int myStrlen();  

   /*
   Desc: Determines if MyString.str is equivalent to an input C-String 
   Pre:  An instance of MyString exists. strIn is a null-terminated
         string.
   Post: Returns true if the strings are equivalent, false otherwise 
   */
   bool isEqual(char const* strIn); 

   /*
   Desc: Searches for a substring within MyString 
   Pre:  An instance of MyString exists
   Post: If strIn is a substring of MyString.str, returns
         the index of its starting positon, -1 otherwise
   */
   int find(char const* strIn); 

   /*
   Desc: Concatenates strIn with MyString 
   Pre:  An instance of MyString exists. strIn is a null-terminated string
   Post: strIn is concatenated with MyString.str.  Ex.
         MyString.str is ABC. strIn is DEF.  MyString is still a null-terminated
	 string, but contains: ABCDEF. 
   */
   void concat(char const* strIn);


 private:
   /*
   Desc: Used in conjunction with the function, find. Loops through MyString starting
         with idx looking for strIn.
   pre: idx is the first character of MyString.str that matches the substring, strIn
   post: returns true if strIn is a substring of str, false otherwise. 
         Used by find()
   */ 
   bool isSub(char const* strIn, int idx); 

   char* str; //points to a dynamically declared null-terminated 
              //array of characters 
   int length;//number of characters in the array pointed to by str 
}; 
#endif

