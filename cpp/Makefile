CXX = g++
CXXFLAGS = -Wall
CPP_FILES = $(wildcard *.cpp)


.PHONY: all
all: $(CPP_FILES:.cpp=.out)

%.out: %.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean
clean:
	rm *.out
