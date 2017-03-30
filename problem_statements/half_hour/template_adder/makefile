CXX = g++
CXXFLAGS = -g -Wall

TARGET = EMBARASSING_PROGRAM_NAME_PLEASE_CHANGE_ME
MAIN   = template_adder.o
INCLUDES = number.o
MAINSRC = template_adder.cpp
INCLUDESRC = number.cpp number.h

exec: $(MAIN) $(INCLUDES) makefile
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(MAIN) $(INCLUDES)

$(MAIN):
	$(CXX) $(CXXFLAGS) -c $(MAINSRC)

number.o:
	$(CXX) $(CXXFLAGS) -c $(INCLUDESRC)

clean:
	rm -f $(TARGET) *.o *.gch

package:
	tar -cvzf ../$(TARGET).tar.gz .
