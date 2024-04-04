stack_comp: stackTst.o stack.o list.o
	g++ -o stack stackTst.o stack.o list.o

stackTst.o: stackTst.cpp
	g++ -c stackTst.cpp 

stack.o: stack.cpp
	g++ -c stack.cpp 

list1.o: list1.cpp
	g++ -c list.cpp 

clean :
	rm *.o
