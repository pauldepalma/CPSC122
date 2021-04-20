#include <iostream>
#include <cstdlib>
using namespace std;

void towers(int,char, char, char);

int moves = 0;

int main(int argc, char* argv[])
{
 int n = atoi(argv[1]);
 
 //solve for n disks by moving them from a to b with c as spare 
 towers(n, 'a', 'b', 'c');
 cout << "Total DisK Moves: " << moves << endl;
}

/*
Observation: 
  source destination spare
  begin with a b c
*/ 


//a = n
//b = 0
//c = 0
//move n disks from a to b with c as spare
void towers(int disk, char a, char b, char c)
{
 if (disk == 1)
    {
     moves++;
     cout << "move disk from pole " << a << " to pole " << b << endl;
    }
 else
    {
     //n-1 disks from a to c with b as spare, giving:
     //1st to 3rd with 2nd as spare
     //a = 1 
     //b = 0 
     //c = n-1
     towers(disk-1,a,c,b);
     
     //1 disk from a to b, giving:
     //1st to 2nd
     //a = 0
     //b = 1
     //c = n-1 
     towers(1,a,b,c);

     //n-1 from c to b with a as spare, giving:
     //3rd to 2nd with 1st as spare
     //a = 0 
     //b = n 
     //c = 0 
     towers(disk-1,c,b,a);
    }
}

