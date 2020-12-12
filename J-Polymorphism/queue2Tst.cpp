#include <iostream>
using namespace std;

#include "queue2.cpp"

//queue1 expect 5 command line arguments
int main(int argc, char* argv[])
{
 Queue<int>* que = new Queue<int>;
 for (int i = 0; i < 5; i++)
  que->Enqueue(i);
 que->Print();

 Queue<char*>* que1 = new Queue<char*>;
 que1->Enqueue(argv[1]);
 que1->Enqueue(argv[2]);
 que1->Enqueue(argv[3]);
 que1->Enqueue(argv[4]);
 que1->Enqueue(argv[5]);
 que1->Print();

 delete que;
 delete que1;

}
