### Makefile ###

# Makefile syntax: 
# target: prerequisites
#     rules
# Makefile usage: make target

COMPILER = g++

all: main.o 
	$(COMPILER) main.o -o program

main.o: main.cpp
	$(COMPILER) -c main.cpp -o main.o

clean:
	rm *.o program
