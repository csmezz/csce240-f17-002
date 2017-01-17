CXX=		g++
CXXFLAGS=	-g -Wall -std=c++1y

TARGET = dynamic_world
SRC = dynamic_world.cpp
DEPS =

exec: dynamic_world.o makefile
	$(CC) $(CCFLAGS) -o $(TARGET) dynamic_world.o
	
dynamic_world.o: dynamic_world.cpp
	$(CC) $(CCFLAGS) -c dynamic_world.cpp
	
dynamic_world: dynamic_world.o makefile
	$(CC) $(CCFLAGS) -o $(TARGET) $(SRC)

clean: 
	rm -rf *.o
