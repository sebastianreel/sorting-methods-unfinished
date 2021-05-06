#include "merge.h"

Merge::Merge(){
    CPU_time = 0;
    compare = 0;
    swap = 0;
    run = 0;
    CPU_total_time = 0;
    compareT = 0;
    swapT = 0; 
}

void Merge::merge(int array[], int i, int j, int temp, int final[]){
    int variable1 = i, variable2 = j, variable3 = 0;
    for(variable3 = variable1; variable3 < temp; variable3++){
        if(array[variable1] <= array[variable2]){
            final[variable3] = array[variable1];
            variable1 = variable1 + 1;

            swap++;
        } else {
            final[variable3] = array[variable2];
            variable2 = variable2 + 1;
        }
        compare++;
    } 
}

void Merge::sort(int array[], const int size, int i, int temp, int final[]){
    int var = 0;
    if(temp > 1){
        var = (i + temp) / 2;

        sort(array, size, i, var, final);
        sort(array, size, var + 1, temp, final);
        merge(array, i, var, temp, final);
    }
}

void Merge::printRun(){
    cout << "Merge Sort: " << endl;
    // cout the CPU time in driver becuase resursion messes it up here
    cout << "Comparisons --> " << compare << endl;
    cout << "Swaps --> " << swap << endl;
}

void Merge::printTotal(){
    cout << "Merge Totals: " << endl;
    cout << "Comparisons Total --> " << (compareT / run) << endl;
    cout << "Swaps Total --> " << (swapT = run) << endl;
}