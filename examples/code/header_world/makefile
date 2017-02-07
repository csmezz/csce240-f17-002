CXX = g++
CXXFLAGS = -g -Wall

TARGET = header_world

exec: header_world.o world_printer.o makefile
	$(CXX) $(CXXFLAGS) -o $(TARGET) header_world.o world_printer.o

header_world.o:
	$(CXX) $(CXXFLAGS) -c header_world.cpp world_printer.h

world_printer.o:
	$(CXX) $(CXXFLAGS) -c world_printer.cpp world_printer.h

clean:
	rm -f $(TARGET) *.o *.gch
