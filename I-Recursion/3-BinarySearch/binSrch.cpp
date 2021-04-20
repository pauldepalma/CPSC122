#include <iostream>
#include <cstring>
using namespace std;

int binSrch(int*, int, int);
int binSrch(int*, int, int, int);

int main(int argc, char* argv[])
{
 int size = atoi(argv[1]);
 int key = atoi(argv[2]);
 char* which = argv[3];
 int top = 0;
 int bottom = size-1;
 int pos = 0;
 
 int* stuff = new int[size];
 
 for (int i = 0; i < size; i++)
      stuff[i] = i;

 if (strcmp(which,"I") == 0)
  pos = binSrch(stuff, size, key);  //iterative

 if (strcmp(which,"R") == 0)
  pos = binSrch(stuff, key, top, bottom); //recursive

 if (pos < 0)
     cout << "Not found" << endl;
 else
     cout << "Found at position " << pos << endl;
 
 return 0;
}

//Iterative
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

//Recursive
int binSrch(int stuff[], int key, int top, int bottom)
{
 if (top > bottom)
  return -1;

 int middle = int((top + bottom) / 2);

 if (key == stuff[middle])
  return middle;

 if (key > stuff[middle])
  return binSrch(stuff, key, middle+1, bottom);
 else
  return  binSrch(stuff, key, top, middle-1);
}
