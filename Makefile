CXX = g++
STD = -std=c++14
CXXFLAGS = -c -Wall -g
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)

StudentDatabase: $(OBJECTS)
	$(CXX) $(OBJECTS) $(STD) -o $@

clean:
	rm StudentDatabase $(OBJECTS)
