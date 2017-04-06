CXX = g++
CXXFLAGS = -g -Wall

TARGET = EMBARASSING_PROGRAM_NAME_PLEASE_CHANGE_ME
MAIN   = main.o
MAINSRC = template_adder.cpp

exec: $(MAIN) cross.o circle.o empty.o board.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

cross.o:
	$(CXX) $(CXXFLAGS) -c support/cross.cpp support/cross.hpp support/shape.hpp

circle.o:
	$(CXX) $(CXXFLAGS) -c support/circle.cpp support/circle.hpp support/shape.hpp

empty.o:
	$(CXX) $(CXXFLAGS) -c support/empty.cpp support/empty.hpp support/shape.hpp

board.o:
	$(CXX) $(CXXFLAGS) -c support/board.cpp support/board.hpp support/shape.hpp

clean:
	rm -f $(TARGET) *.o *.gch

package:
	tar -cvzf ../$(TARGET).tar.gz .
