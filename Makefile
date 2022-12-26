vector: utils.o test_vector.o
	g++ utils.o test_vector.o -o vector

utils.o: src/lib/utils.cpp
	g++ -c src/lib/utils.cpp

test_vector.o: src/bin/test_vector.cpp
	g++ -c src/bin/test_vector.cpp

clean: 
	rm *.o vector
