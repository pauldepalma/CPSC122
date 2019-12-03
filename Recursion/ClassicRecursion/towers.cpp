#include <iostream>
#include <cstdlib>
using namespace std;

void towers(int,char, char, char);

int main(int argc, char* argv[])
{
 int n = atoi(argv[1]);
 
 //solve for n disks by moving them from a to b with c as spare 
 towers(n, 'a', 'b', 'c');
}

/*
Observation: 
  source destination spare
  begin with a b c
*/ 

void towers(int n, char a, char b, char c)
{
 if (n == 1)
    cout << "move disk from pole " << a << " to pole " << b << endl;
 else
    {
     //Begin with n disks on pole 1, 0 or poles b and c
     //Move n-1 disks from a to c with b as spare
     //The mnemonic devic is: 1st to 3rd with 2nd as spare
     //At the end:
     //a = 1 
     //b = 0 
     //c = n-1 
     towers(n-1,a,c,b);

     //Trivial Case: 1 disk on a 
     //Move it to b
     //At the end:
     //a = 0
     //b = 1
     //c = n-1 
     towers(1,a,b,c);

     //With n-1 disks on pole c, move them to pole b with a as spare 
     //The mnemonic devic is: 3rd to 2nd with 1st as spare
     //At the end: 
     //a = 0 
     //b = n 
     //c = 0 
     towers(n-1,c,b,a);
    }
}

