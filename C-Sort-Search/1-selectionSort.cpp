/*
Paul De Palma
Class: CPSC 122
GU Username: depalma
Date Submitted: February 2, 2021 
Assignment: N/A
Description: Demonstrates selection sort
*/

#include <iostream>
#include <cstdlib>
#include <ctime> //for time
using namespace std;

void fill_array(int[],int);
void selection_sort(int[],int);
int find_small(int, int[], int);
void swap(int, int, int[]);

const int LIMIT = 100;  //max size of random integer in table`

int main(int argc, char* argv[])
{
 int length = atoi(argv[1]);
 int* arr = new int[length];  //creates an integer of size length
                              //accept this on faith for now
 fill_array(arr,length);

 cout << "Print unsorted array" << endl;
 for (int i = 0; i < length; i++)
   cout << arr[i] << endl;

 selection_sort(arr,length);

 cout << "Print sorted array" << endl;
 for (int i = 0; i < length; i++)
   cout << arr[i] << endl;

 return 0;
}

/*
Description: filles an array with randomly generated integers
Input: integer array and its length
*/
void fill_array(int arr[], int length)
{
 unsigned seed = time(0);
 srand(seed);
 
 for (int i = 0; i < length; i++)
   arr[i] = rand() % (LIMIT + 1);
}

/*
Description: outer, control loop for selection sort  
Input: array of integers to be sorted along with its length
Output: array is sorted at the end of function
*/
void selection_sort(int arr[], int length)
{
 int pass = 0;
 int start = 0;
 int idx_small; 

 /*There are two ways of thinking about the outer loop
   1) we know we have to make N-1 passes through the array.  Think of this as moving
      horizontally in the example shown on the board. Though this requires redundant
      code, I think it's clearer
   2) we know we are finished when we have compared
      1st to 2nd
      2nd to 3rd
          ...
      next-to-last to last 
      There are N-1 such comparisons
   These are actually the same thing, of course
 */
 while(pass < length - 1 )      //option 1 
 //while(start < length - 1 )   //option 2 
 {
  int idx_small = find_small(start, arr, length);
  swap(start,idx_small,arr);
  start++;
  pass++; 
 }
}

/*
Description: linear search through an array looking for smallest element
Input: position to start search, array, length of array
Output: returns smallest element in the array
*/
int find_small(int start, int arr[], int length)
{
 int idx_small = start;  //candidate smallest
 int next = start + 1;    //start searching here
 while(next < length)         
 {
  if (arr[next] < arr[idx_small]) //we've found a new smallest integer
     idx_small = next;
  next++;                        //look at the next position whether or not
                                //we've found a new smallest 
 }
 return idx_small;
}


/*
Description: swaps the contents of two posiitons in an array 
Input: position whose contents is swapped with smallest,  position of smallest, array 
Output: returns smallest element in the array
*/
void swap(int pos, int idx_small, int arr[])
{
 int tmp = arr[pos];
 arr[pos] = arr[idx_small];
 arr[idx_small] = tmp;
}

