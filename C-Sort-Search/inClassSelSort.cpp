#include <iostream>
#include <cstdlib>
using namespace std;

int find_small(int start, int stuff[], int len);
void loadArray(int[], int);

int main(int argc, char* argv[])
{
  int size = atoi(argv[1]);

  int* stuff = new int[size];

  loadArray(stuff, size);

  for (int i = 0; i < size; i++)
   cout << stuff[i] << endl;
   cout << endl;

  int idxSmall = find_small(0,stuff,size);

  cout << "idx: " << idxSmall << " " << "Smallest: " << stuff[idxSmall] << endl;


  return 0;
 }

void loadArray(int stuff[], int size)
{
 unsigned seed = time(NULL);
 srand(seed);

 for (int i = 0; i < size; i++)
  stuff[i] = rand() % 100;

}


int find_small(int start, int stuff[], int len)
{
 int smallIdx = start;
 int next = start + 1;

 while(next < len)
 {
  if (stuff[next] < stuff[smallIdx])
   smallIdx = next;
  next++;
 }

 return smallIdx;
}
