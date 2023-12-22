all: point

point: main.o point.o
	g++ main.o point.o -o point

main.o: main.cpp
	g++ -c main.cpp

point.o: point.cpp
	g++ -c point.cpp

clean: rm -rf *.o point