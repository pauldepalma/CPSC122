#ifndef Rect_H
#define Rect_H


class Rectangle 
{
 public:
   //What can I do?
   Rectangle(int widthIn, int lengthIn); 
   void   setWidth(double widthIn);
   void   setLength(double lengthIn);
   double getWidth() const; 
   double getLength() const; 
   double getArea() const;

 private:
   //What do I know?
   double width;
   double length;
};
#endif  
