#include <iostream>
#include <cstdlib>
using namespace std;

void towers(int,char, char, char);

int main(int argc, char* argv[])
{
 int n = atoi(argv[1]);
 
 //solve for n disks by moving them from a to c with b as spare 
 towers(n, 'a', 'b', 'c');
}

/*
Observation: 
  The source is always the first argument
  The spare is always the second argument
  The destination is always the third argument
*/ 

void towers(int n, char a, char b, char c)
{
 if (n == 1)
    cout << "move disk from pole " << a << " to pole " << c << endl;
 else
    {
     //solve for n-1 disks by moving them from a to b with c as spare 
     towers(n-1,a,c,b);

     //1 disk remains on pole a after the first recursive call
     //solve for 1 disk by  moving it from a to c 
     towers(1,a,b,c);

     //Because of the first recursive call, there are now n-1 discs on b.  
     //solve for n-1 disks by moving them from b to c with a as spare 
     towers(n-1,b,a,c);
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
