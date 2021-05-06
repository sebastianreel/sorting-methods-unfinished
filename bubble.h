#pragma once
#include <iostream>
#include <chrono>
#include "sort_interface.h"
using namespace std::chrono;

class Bubble: public SortInterface{
    float CPU_time;
    long long int compare;
    long long int swap;
    int run;

    float CPU_total_time;
    long double compareT;
    long double swapT;
public:
    Bubble();
    void sort(int array[], const int size);
    void printRun();
    void printTotal();
};
#include "bubble.cpp"