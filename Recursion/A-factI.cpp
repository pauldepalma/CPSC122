#include <iostream>
using namespace std;


// fact(n) = n * (n-1) * (n-2) * ... * 1
int fact(int);


int main(int argc, char* argv[])
{
 int num = atoi(argv[1]);

 cout << fact(num) << endl;
 return 0;
}

int fact(int num)
{
 int acc = 1;
 if (num == 0)
   return 1;

 int i = 1;
 while (i <= num)
 {
  acc = acc * i;
  i++; 
 }
 return acc; 
}  

