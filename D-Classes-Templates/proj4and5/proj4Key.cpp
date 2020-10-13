

#include <iostream>
#include <fstream>
using namespace std;

const int R = 26; //number of chars in key
const int C = 2;  //encrypt/decrypt is a map from col 0 to col 1 

//generate and store the key
void store_key(string);
void key_gen(int[]);

//make ptct and ctpt, 2D arrays for encryption and decryption
void make_ptct(int[][C], string); 
void make_ctpt(int[][C], int[][C]);
void selection_sort(int[][C]);
int  find_small(int,int[][C], int);
void swap_rows(int, int,int[][C]);
void swap_cols(int[][C],int);
void swap_col(int[][C],int);

//Encrypt or decrypt
void read_write_loop(string,string,int,int[][C],int[][C]);
char transpose(char, int[][C]);

//utility to open files safely
void fileOpen(fstream&, string, char);


int main(int argc, char* argv[])
{

  string in_file, out_file, key_file;
  int mode;
 
  //Generate and store the key
  if (argc == 2)
  {
    key_file = argv[1];
    store_key(key_file);
  } 

  //Encrypt or decrypt 
  if (argc == 5)
  {
    in_file = argv[1];
    out_file = argv[2];
    key_file = argv[3];
    mode = atoi(argv[4]);
    int ptct[R][C];
    int ctpt[R][C];

    make_ptct(ptct,argv[3]); 
    make_ctpt(ptct,ctpt);
    read_write_loop(in_file,out_file,mode,ptct,ctpt);
 }

 return 0;
}


//store the generated key
void store_key(string key_file)
{
  fstream fout;
  int key[R];

  key_gen(key);

  fileOpen(fout,key_file,'w');
  for(int i = 0; i < R; i++)
    fout << key[i] << endl;
  fout.close();
}

//generate the key
void key_gen(int key[])
{
  bool validate[R] = {false};
  unsigned seed = time(0);
  srand(seed);
  int pos = 0;

  while (pos < R)
  {
    while(true)
    {
      int k = rand() % R;
      if (!validate[k])
        {
          key[pos] = k;
          validate[k] = true;
          pos++;
          break;
         }
     }
  }
}

//Encrypt/decrypt each alph character in the input file.  Write to he output file
void read_write_loop(string in_file, string out_file, int mode, int ptct[][C], int ctpt[][C])
{
  fstream fin, fout;
  char ch;

  fileOpen(fin,in_file,'r');
  fileOpen(fout,out_file,'w');

  while(fin.peek() != EOF)
  {
    ch = fin.get();
    if (isalpha(ch))
      if (mode == 0)
      {
        ch = toupper(ch);
        ch = transpose(ch,ptct);  //encrypt
      }
    else
      ch = transpose(ch,ctpt);   //decrypt
  
    fout.put(ch);		 
  }

  fin.close();
  fout.close();
}

//transposiiton sort
char transpose(char ch, int tr[][C])
{
  int pos = ch - 'A';
  ch = tr[pos][1];
  ch = ch + 'A';
  return ch;
}

//create a 2d array with the encryption key in the first col
void make_ptct(int ptct[][C], string key_file)
{
  fstream fin;

  fileOpen(fin,key_file,'r');

  for(int i = 0; i < R; i++)
  {
    ptct[i][0] = i;
    fin >> ptct[i][1];
  }

  fin.close();
}

//create a 2d array with the decryption key in the first col
void make_ctpt(int ptct[][C], int ctpt[][C]) 
{

 for (int i = 0; i < R; i++)
 {
   ctpt[i][0] = ptct[i][0];
   ctpt[i][1] = ptct[i][1];
 }

 selection_sort(ctpt);
 swap_cols(ctpt, R);
}

//use selection sort to sort the first col, taking the 0th along for the ride
//at the beginning ctpt is a copy of ptct
//swapping the rows creates a decryption key
void selection_sort(int ctpt[][C])
{
  int pass = 0;
  int start = 0;
  int idx_small; 

  while(pass < R - 1 )      
  {
    int idx_small = find_small(start, ctpt, R);
    swap_rows(start,idx_small,ctpt);
    start++;
    pass++; 
  }
}

//find the least character in the unsorted part of the array
//its row will be swapped with the starting row in swap_rows below
int find_small(int start, int arr[][2], int length)
{
  int idx_small = start;  
  int next = start + 1;  
  while(next < length)         
  {
    if (arr[next][1] < arr[idx_small][1]) 
      idx_small = next;
    next++;                        
  }
  return idx_small;
}

void swap_rows(int start, int idx_small, int arr[][2])
{
  char tmp[1][2];
  tmp[0][0] = arr[start][0];
  tmp[0][1] = arr[start][1];

  arr[start][0] = arr[idx_small][0];
  arr[start][1] = arr[idx_small][1];

  arr[idx_small][0] = tmp[0][0];
  arr[idx_small][1] = tmp[0][1];
}


//next two functions swap the columns in the sorted 2d array.
//at the end, arr is the decryption array
void swap_cols(int arr[][2], int num_rows)
{
  for (int row = 0; row < num_rows; row++)
    swap_col(arr,row);
}

void swap_col(int arr[][2], int row)
{
  int tmp = arr[row][0];
  arr[row][0] = arr[row][1];
  arr[row][1] = tmp;
} 

//a safe file open function
void fileOpen(fstream& file, string name, char mode)
{
  string fileType;

  if (mode == 'r')
    fileType = "input";
  if (mode == 'w')
    fileType = "output";

  if (mode == 'r')
    file.open(name, ios::in);  //available thorugh fstream
  if (mode == 'w')
    file.open(name, ios::out);  //available through fstream;

  if (file.fail()) //error condition 
  {
    cout << "Error opening " << fileType << " file" << endl; 
    exit(EXIT_FAILURE);
  }
}

