CXX = g++
CXXFLAGS = -g -Wall

TARGET = pq

exec: main.o node.o queue.o makefile
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o queue.o

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp queue.h node.h

queue.o:
	$(CXX) $(CXXFLAGS) -c queue.cpp queue.h

node.o:
	$(CXX) $(CXXFLAGS) -c node.cpp node.h

clean:
	rm -f $(TARGET) *.o *.gch

package:
	tar -cvzf ../$(TARGET).tar.gz .
