#include <iostream>
using namespace std;

//illustrates manipulating a 2-D array
//The  first row is exchanged with the last

void swap(int stuff[][2],int,int);

int main()
{
 int stuff[5][2];

 for (int i = 0; i < 5; i++)
   {
     stuff[i][0] = i;    
     stuff[i][1] = 4 - i;
   }

 //display array in 2 column format
 for (int i = 0; i < 5; i++)
     cout << stuff[i][0] << " " << stuff[i][1] << endl;

 swap(stuff, 0, 4); //exchange the 0th and 4th rows
 cout << endl;
      
 //display array in 2 column format
 for (int i = 0; i < 5; i++)
     cout << stuff[i][0] << " " << stuff[i][1] << endl;


 return 0;
}

void swap(int stuff[][2], int frst, int lst)
{
 int tmp[1][2];

 tmp[0][0] = stuff[0][0];
 tmp[0][1] = stuff[0][1];

 stuff[0][0] = stuff[4][0];
 stuff[0][1] = stuff[4][1];

 stuff[4][0] = tmp[0][0];
 stuff[4][1] = tmp[0][1];
}
