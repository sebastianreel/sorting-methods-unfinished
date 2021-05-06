#pragma once
#include "sort_interface.h"
#include <iostream>
#include <chrono>
using namespace std::chrono;

class Merge: public SortInterface{
    float CPU_time;
    long long int compare;
    long long int swap;
    int run;

    float CPU_total_time;
    long double compareT;
    long double swapT;
public:
    Merge();
    void merge(int array[], int i, int j, int temp, int final[]);
    void sort(int array[], const int size, int i, int temp, int final[]);
    void printRun();
    void printTotal();
};
#include "merge.cpp"