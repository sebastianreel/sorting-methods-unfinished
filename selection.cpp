#include "selection.h"
#include "selection.h"

Selection::Selection(){
    CPU_time = 0;
    compare = 0;
    swap = 0;
    run = 0;
    CPU_total_time = 0;
    compareT = 0;
    swapT = 0;
}

void Selection::sort(int array[], const int size){
    int temp = 0, min = 0;
    CPU_time = 0;
    compare = 0;
    swap = 0;

    auto start = high_resolution_clock::now();
    for(int i = 0; i < size - 1; i++){
        min = i;
        for(int j =  i + 1; j < size; j++){
            if(array[j] < array[min]){
                min = j;

                int temp = array[min];
                array[min] = array[i];
                array[i] = array[min];

                swap++;
            }
            compare++;
        }
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    CPU_time = duration.count();
    CPU_total_time += CPU_time;
    compareT += compare;
    swapT += swap;

    run++;
}

void Selection::printRun(){
    cout << "Selection Sort: " << endl;
    cout << "CPU Time --> " << CPU_time << endl;
    cout << "Comparisons --> " << compare << endl;
    cout << "Swaps --> " << swap << endl;
}

void Selection::printTotal(){
    cout << "Selection Sort Totals: " << endl;
    cout << "CPU Time Total --> " << (CPU_total_time / run) << endl;
    cout << "Comparisons Total --> " << (compareT / run) << endl;
    cout << "Swaps Total --> " << (swapT / run) << endl;
}