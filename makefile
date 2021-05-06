sort: driver.o selection.o merge.o bubble.o
	g++ driver.cpp selection.cpp merge.cpp bubble.cpp -o sort

driver.o: driver.cpp selection.h merge.h bubble.h
	g++ -c driver.cpp

selection.o: selection.cpp selection.h
	g++ -c selection.cpp

merge.o: merge.cpp merge.h
	g++ -c merge.cpp

bubble.o: bubble.cpp bubble.h
	g++ -c bubble.cpp

clean:
	rm*.o