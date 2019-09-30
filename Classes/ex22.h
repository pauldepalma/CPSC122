#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
 public:
   //What do I know?
   Rectangle(int widthIn, int lengthIn); 
   void   setWidth(double widthIn);
   void   setLength(double lengthIn);
   double getWidth() const; 
   double getLength() const; 
   double getArea() const;

 private:
   //What can I do?
   double width;
   double length;
};
#endif  
