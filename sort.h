//Name: Sebastian Reel
//Date Due: 3/28/2021
//Project: Sorting Algorithms

#ifndef sort_h
#define sort_h

template<class ItemType>
class Sort{
    ItemType Array[];
    int x;
    int first;
    int mid;
    int last;
public:
    void insertionSort(ItemType Array[], int);
    void bubbleSort(ItemType Array[], int);
    void merge(ItemType Array[], int, int, int);
    void mergeSort(ItemType Array[], int, int);
};
#include "sort.cpp"
#endif