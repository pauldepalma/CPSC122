stack_comp: stackTst.o stack.o list.o
	g++ -o stack stackTst.o stack.o list.o

stackTst: stackTst.cpp
	g++ -c stackTst.cpp 

stack: stack.cpp
	g++ -c stack.cpp 

list: list.cpp
	g++ -c list.cpp 

clean: list.o stack.o stackTst.o 
	rm *.o
