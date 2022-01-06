# Makefile for compiling and linking files required for Train and Car classes

# Variables for compiling and clang compiling arguments
CXX = clang++
CXXFLAGS = -g -Wall -Wextra -pedantic -std=c++17

# make all will look for all changed files to recompile and relink
all: main

# generates final main executable
main: main.o car.o train.o
	$(CXX) -o main main.o car.o train.o

# compiles the Car class files to object file
car.o: car.cpp car.hpp
	$(CXX) -c -o car.o $(CXXFLAGS) car.cpp

# compiles the Train class files to object file
train.o: train.cpp train.hpp car.hpp
	$(CXX) -c -o train.o $(CXXFLAGS) train.cpp

# compiles the main main.cpp file to object file
main.o: main.cpp car.hpp train.hpp
	$(CXX) -c -o main.o $(CXXFLAGS) main.cpp

# make clean will remove all object files from the directory
clean:
	rm -rf *.o main

