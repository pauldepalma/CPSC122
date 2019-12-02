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
     //With n disks on pole a, solve the problem with n-1 disks
     //moving them from a to c with b as spare
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

     //c is now the source with n-1 disk
     //b has 1 disk. it is the destination
     //a has 0 disks. it is the spare
     towers(n-1,c,b,a);
    }
}

/*
Trace for n = 3

t(3,a,b,c)
	t(2,a,c,b)
		t(1,a,b,c): 	a-->c
		t(1,a,c,b): 	a-->b
		t(1,c,a,b): 	c-->b
	        complete recursive call	
	t1(1,a,b,c):		a-->c
	t2(2,b,a,c)
		t(1,b,c,a)	b-->a
		t(1,b,a,c)	b-->c
		t(1(a,b,c)	a-->c
                complete recursive call 
	complete recursive call 
*/		
