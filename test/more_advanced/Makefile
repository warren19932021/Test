### Makefile ###

# Makefile syntax: 
# target: prerequisites
#     rules
# Makefile usage: make target

COMPILER = g++

all: main.o Shape.o Square.o
	$(COMPILER) main.o Shape.o Square.o -o program

main.o: main.cpp
	$(COMPILER) -c main.cpp -o main.o

Shape.o: src/Shape.cpp include/Shape.h
	$(COMPILER) -c src/Shape.cpp

Square.o: src/Square.cpp include/Square.h
	$(COMPILER) -c src/Square.cpp

clean:
	rm *.o program