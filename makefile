sort: driver.o 
	g++ driver.cpp -o sort

driver.o: driver.cpp sort.h arraylist.h
	g++ -c driver.cpp

clean:
	rm.*o