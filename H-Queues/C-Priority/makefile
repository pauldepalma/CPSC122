#to run: make
queueP: queuePTst.o queueP.o queueI.o list.o
	g++ -o queueP queuePTst.o queueP.o queueI.o list.o

queuePTst.o: queuePTst.cpp
	g++ -c queuePTst.cpp 

queueP.o: queueP.cpp
	g++ -c queueP.cpp 

queueI.o: queueI.cpp
	g++ -c queueI.cpp 

list.o: list.cpp
	g++ -c list.cpp 
