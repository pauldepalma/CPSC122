#ifndef Rect_H
#define Rect_H


class Rectangle 
{
 public:
   //What can I do?

   //Member functions or methods
   //called the Constructor
   Rectangle(int widthIn, int lengthIn); 
   void   setWidth(double widthIn);
   void   setLength(double lengthIn);
   double getWidth() const; 
   double getLength() const; 
   double getArea() const;

 //Member variables
 private:
   //What do I know?
   double width;
   double length;
};
#endif  
