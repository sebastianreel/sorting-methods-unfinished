#include "bubble.h"

Bubble::Bubble(){
    CPU_time = 0;
    compare = 0;
    swap = 0;
    run = 0;
    CPU_total_time = 0;
    compareT = 0;
    swapT = 0; 
}

void Bubble::sort(int array[], const int size){
    int temp = 0;
    CPU_time = 0;
    compare = 0;
    swap = 0;

    auto start = high_resolution_clock::now();
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){\
            if(array[j] > array[j + 1]){
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;

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

void Bubble::printRun(){
    cout << "Bubble Sort: " << endl;
    cout << "CPU Time --> " << CPU_time << endl;
    cout << "Comparisons --> " << compare << endl;
    cout << "Swaps --> " << swap << endl;
}

void Bubble::printTotal(){
    cout << "Bubble Sort: " << endl;
    cout << "CPU Total Time --> " << (CPU_total_time / run) << endl;
    cout << "Comparisons Total --> " << (compareT / run) << endl;
    cout << "Swaps Total --> " << (swapT / run) << endl;
}

