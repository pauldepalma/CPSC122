#include <iostream>
using namespace std;

int binSrch(int*, int, int);

int main(int argc, char* argv[])
{
 int size = atoi(argv[1]);
 int key = atoi(argv[2]);
 
 int* stuff = new int[size];
 
 for (int i = 0; i < size; i++)
      stuff[i] = i;

 int pos = binSrch(stuff, size, key);

 if (pos < 0)
     cout << "Not found" << endl;
 else
     cout << "Found at position " << pos << endl;
 
 return 0;
}

int binSrch(int stuff[], int size, int key)
{
 int top, middle, bottom;
 bool found = false;

 top = 0;
 bottom = size - 1;

 while (top <= bottom)
 {
  int middle = int((top + bottom) / 2);
  if (stuff[middle] == key)
     return middle;
  if (key > stuff[middle]) 
     top = middle + 1;      //discard top half
  else
     bottom = middle - 1;   //discard bottom half
 }
 return -1 ;
}
