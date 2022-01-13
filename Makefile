
CC = g++

TARGET = test


all: $(TARGET)

test: main.cpp lib_team06.so
	$(CC) -o test main.cpp -L./ -l_team06

lib_team06.so: Stack.o Queue.o LinkedBinaryTree.o Graph.o DLL.o 
	$(CC) -shared -o lib_team06.so Stack.o Queue.o LinkedBinaryTree.o Graph.o DLL.o 


Stack.o: Stack.cpp Library.hpp
	$(CC) -fPIC -c Stack.cpp Library.hpp 

Queue.o: Queue.cpp Library.hpp
	$(CC) -fPIC -c Queue.cpp Library.hpp 

LinkedBinaryTree.o: LinkedBinaryTree.cpp Library.hpp
	$(CC) -fPIC -c LinkedBinaryTree.cpp Library.hpp

Graph.o: Graph.cpp Library.hpp
	$(CC) -fPIC -c Graph.cpp Library.hpp

DLL.o: DLL.cpp Library.hpp
	$(CC) -fPIC -c DLL.cpp Library.hpp

clean:
	rm -f *.o
	rm -f *.gch