CXX = g++
CXXFLAGS = -g -Wall

TARGET = EMBARASSING_PROGRAM_NAME_PLEASE_CHANGE_ME

exec: main_program.o included_file.o makefile
	$(CXX) $(CXXFLAGS) -o $(TARGET) main_program.o included_file.o

main_program.o:
	$(CXX) $(CXXFLAGS) -c main_program.cpp included_file.h

included_file.o:
	$(CXX) $(CXXFLAGS) -c included_file.cpp included_file.h

clean:
	rm -f $(TARGET) *.o *.gch
	
package:
	tar -cvzf ../$(TARGET).tar.gz .
