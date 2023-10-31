CXX = g++
CXXFLAGS = -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -pipe -O2 -DNDEBUG 
LDLIBS = 
RM = rm -f

all: main

debug: CXXFLAGS += -ggdb 
debug: main

main:
	$(CXX) $(CXXFLAGS) calendar.cpp utility.cpp -o calendar


clean:
	$(RM) calendar
