CXX = g++
CXXFLAGS = -g -Wall -std=c++11 -I./includes -L./includes -l:restbed
TARGET = TRIVIA_MASTER

exec: main.o TM_Net.o TM_Message.o makefile
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o TM_Net.o TM_Message.o

main.o:
	$(CXX) $(CXXFLAGS) -c ./src/main.cpp

TM_Net.o:
	$(CXX) $(CXXFLAGS) -c ./includes/TM_Net.cpp ./includes/TM_Net.hpp

TM_Message.o:
	$(CXX) $(CXXFLAGS) -c ./includes/TM_Message.cpp ./includes/TM_Message.hpp

clean:
	rm -f $(TARGET) *.o *.gch
	
package:
	tar -cvzf ../$(TARGET).tar.gz .
