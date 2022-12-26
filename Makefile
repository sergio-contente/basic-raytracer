vector: utils.o
	gcc utils.o -o vector

utils.o: src/lib/utils.cpp
	gcc -c utils.cpp

clean: 
	rm *.o vector
