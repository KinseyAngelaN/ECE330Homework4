output: test.o employee.o 
	g++ test.o employee.o -o output

test.o: test.cpp
	g++ -c test.cpp

employee.o: employee.cpp employee.h
	g++ -c employee.cpp

clean:
	rm *.o output
