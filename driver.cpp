//Name: Sebastian Reel
//Date Due: 3/28/2021
//Project: Sorting Algorithms

#include <iostream>     // this is a comment
#include <random>
#include <chrono>
#include <ctime>

#include "arraylist.h"
#include "sort.h"

using namespace std;

//prototypes
void insertion(int , int);
void mergeS(int, int, int);
void bubble(int, int, int);
int random(int, int);
long long min(int, long long);
long long max(int, long long);
long long average(int, long long);

//main
int main(){
    srand(time(0));     // starts randomly generating numbers at time 0, need for later
    
    // data structure calls
    ArrayList<long long> OneTArray;
    ArrayList<long long> TenTArray;
    ArrayList<long long> HunTArray;

    for(int i = 0; i < 1000; i++){
        OneTArray.insert(i, random(0, 106));        // looping 1000 times for random numbers
    }

    for(int i = 0; i < 10000; i++){
        TenTArray.insert(i, random(0, 106));        // looping 10000 times for random numbers
    }

    for(int i = 0; i < 100000; i++){
        HunTArray.insert(i, random(0, 106));        // looping 100000 times for random numbers
    }

    /*insertion(OneTArray, 1000);
    mergeS(OneTArray, 0, 1000);         // this is supposed to run the 1000 iteration
    bubble(OneTArray, 0, 1000);

    insertion(TenTArray, 10000);
    mergeS(TenTArray, 0, 10000);        // this is supposed to run the 10000 iteration
    bubble(TenTArray, 0, 10000);

    insertion(HunTArray, 100000);
    mergeS(HunTArray, 0, 100000);       // this is supposed to run the 100000 iteration
    bubble(HunTArray, 0, 100000);
    */
   
    return 0;
}

//definiitions
template<class ItemType>
void insertion(int Array[], int x){
    long long time;

    for(int i; i < 10; i++){
        auto start = chrono::high_resolution_clock::now();
        
        Sort<ItemType> theSort;
        theSort.insertionSort(Array, x);

        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds> (stop - start);

        theSort.insertionSort(Array, x).max(100000, x);
        duration.count() = time;
        time.max(100000, 0);
    }
}

template<class ItemType>
void mergeS(int Array[], int first, int last){
    int time;

    for(int i; i < 10; i++){
        auto start = chrono::high_resolution_clock::now();

        Sort<ItemType> theSort;
        theSort.mergeSort(Array, first, last);

        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds> (stop - start);

        duration.count() = time;
        time.max(100000, 0);
    }
}

template<class ItemType>
void bubble(int Array[], int first, int last){
    for(int i; i < 10; i++){
        auto start = chrono::high_resolution_clock::now();

        Sort<ItemType> theSort;
        theSort.bubbleSort(Array, first, last);

        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds> (stop - start);

        duration.count() = time;
        time.max(100000, 0);
    }
}

int random(int low, int high){
    int random;
    random = low + rand()%high;
    
    return random;
}

long long min(int Array[], long long size){
    int max_boy = 0;

    for(int i = 0; i < size; i++){
        if(Array[i] > max_boy){
            max_boy = Array[i];
        }
    }
    return max_boy;
}

long long max(int Array[], long long size){
    int min_boy = 107;

    for(int i = 0; i < size; i++){
        if(Array[i] < min_boy){
            min_boy = Array[i];
        }
    }
    return min_boy;
}

/*long long average(int Array[], long long size){
    //idk
} 
*/  