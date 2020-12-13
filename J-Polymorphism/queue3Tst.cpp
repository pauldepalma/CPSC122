#include <iostream>
using namespace std;

#include "queue3.cpp"

//requires 4 command line arguments
int main(int argc, char* argv[])
{
 PQueue<int>* pque = new PQueue<int>;
 pque->Enqueue(4,4);
 pque->Enqueue(7,7);
 pque->Enqueue(1,1);
 pque->Enqueue(5,5);
 pque->Enqueue(10,10);
 pque->Print();
 delete pque;
 cout << endl;

 PQueue<char*>* pque1 = new PQueue<char*>;

 pque1->Enqueue(3,argv[3]);
 pque1->Enqueue(1,argv[1]);
 pque1->Enqueue(2,argv[2]);
 pque1->Enqueue(4,argv[4]);
 pque1->Print();
 pque1->Print();
 delete pque1;

}
