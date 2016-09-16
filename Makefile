FLAGS=-pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -std=c++11 -lm
COMPILLER=g++

all: start

start: rectangle.o main.o
	$(COMPILLER) $(FLAGS) -o oop-lab1 rectangle.o main.o

main.o: main.cpp
	$(COMPILLER) -c $(FLAGS) main.cpp



rectangle.o: rectangle.cpp
	$(COMPILLER) -c $(FLAGS) rectangle.cpp

clear:
	-rm -f *.o *.gch da-lab1
