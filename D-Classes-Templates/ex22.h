#ifndef Search_H
#define Search_H


class Search 
{
 public:
   //What can I do?
   Search(int widthIn, int lengthIn); 
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
