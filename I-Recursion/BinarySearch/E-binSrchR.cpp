#include <iostream>
using namespace std;

int binSrch(int*, int, int, int);

int main(int argc, char* argv[])
{
 unsigned long size = atoi(argv[1]);
 int key = atoi(argv[2]);
 
 int* stuff = new int[size];
 
 for (int i = 0; i < size; i++)
      stuff[i] = i;

 int pos = binSrch(stuff, 0, size - 1, key);

 if (pos < 0)
     cout << "Not found" << endl;
 else
     cout << "Found at position " << pos << endl;
 
 return 0;
}

int binSrch(int stuff[], int top, int bottom, int key)
{
 
 if (top > bottom)
    return - 1;
  
 int  middle = int((bottom + top) / 2);
  
 if (key == stuff[middle])
     return middle;
 if (key > stuff[middle] )
    return binSrch(stuff, middle + 1, bottom, key);    //discard top half
 else
    return binSrch(stuff, top, middle - 1, key);    //discard bottom half
}
