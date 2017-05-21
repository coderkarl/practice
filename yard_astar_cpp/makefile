test_astar: main.o move.o
	g++ -o test_astar main.o move.o

main.o: main.cpp move.hpp
	g++ -c main.cpp

move.o: move.cpp move.hpp
	g++ -c move.cpp

clean:
	rm *.o test_astar
