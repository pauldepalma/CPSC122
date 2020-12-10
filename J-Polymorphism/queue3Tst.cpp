#include <iostream>
using namespace std;

#include "queue3.cpp"


int main(int argc, char* argv[])
{
 PQueue<int>* pque = new PQueue<int>;
 for (int i = 0; i < 5; i++)
  pque->Enqueue(i,i);
 pque->Print();

 delete pque;
}
