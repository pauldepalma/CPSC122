#to run: make
#to elminate .o file: make clean
calc: calcTst.o calc.o stack2.o list.o
	g++ -o calc calcTst.o calc.o stack2.o list.o

calcTst.o: calcTst.cpp
	g++ -c calcTst.cpp 

calc.o: calc.cpp
	g++ -c calc.cpp 

stack1.o: stack1.cpp
	g++ -c stack2.cpp 

list1.o: list.cpp
	g++ -c list.cpp 

clean :
	rm *.o
