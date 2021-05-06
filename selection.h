#pragma once
#include "sort_interface.h"
#include <iostream>
#include <chrono>
using namespace std::chrono;
// using selection instead of insertion for easier implementation

class Selection: public SortInterface{
    float CPU_time;
    long long int compare;
    long long int swap;
    int run;

    float CPU_total_time;
    long double compareT;
    long double swapT;
public:
    Selection();

    void sort(int array[], const int size);
    void printRun();
    void printTotal();
};
#include "selection.cpp"
