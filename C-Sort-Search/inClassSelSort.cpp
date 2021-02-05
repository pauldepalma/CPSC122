#include <iostream>
#include <cstdlib>
using namespace std;

int findSmallest(int, int, int);
void loadArray(int[], int);

int main(int argc, char* argv[])
{
  int size = atoi(argv[1]);

  int* stuff = new int[size];

  loadArray(stuff, size);

  return 0;
 }

void loadArray(int stuff[], int size)
{
 unsigned seed = time(0);

 for (int i = 0; i < size; i++)
  stuff[i] = rand() % 100;

}

int findSmallest(int stuff[], int len, int start)
{
 int smallIdx = start;

 for (int idx = start+1; idx < len; idx++)
  if (stuff[idx] < stuff[smallIdx])
   smallIdx = idx;

 return smallIdx;
}
