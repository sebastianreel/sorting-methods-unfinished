//Name: Sebastian Reel
//Date Due: 3/28/2021
//Project: Sorting Algorithms

#include "sort.h"

template<class ItemType>
void Sort<ItemType>::insertionSort(ItemType Array[], int x){
    for(int notSorted = 1; notSorted < x; notSorted++){
        
        ItemType nextItem = Array[notSorted];
        int location = notSorted;
        
        while((location > 0) && (Array[location - 1] > nextItem)){
            Array[location] = Array[location - 1];
            location--;
        }
        
        Array[location] = nextItem;
    }
}

template<class ItemType>
void Sort<ItemType>::bubbleSort(ItemType Array[], int x){
    bool sort = false;
    int passed = 1;

    while(!sort && (passed > x)){
        sorted = true;

        for(int i = 0; i < x - passed; i++){
            int next_i = i + 1;

            if(Array[i] > Array[next_i]){
                swap(Array[i], Array[next_i]);
                sort = false;
            }
        }
        passed++;
    }
}

const int MAX = 100;

template<class ItemType>
void Sort<ItemType>::merge(ItemType Array[], int first, int mid, int last){
    ItemType tempArray[MAX];

    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;

    int i = first1;
    while((first1 <= last1) && (first2 <= last2)){
        
        if(Array[first1] <= Array[first2]){
            tempArray[i] <= Array[first1];
            first++;
        } else {
            tempArray[i] = Array[first2];
            first2++
        }
        i++;
    }

        while(first1 <= last1){
            tempArray[i] = Array[first1];
            first1++;
            i++;
        }

        while(first2 <= last2){
            tempArray[i] = Array[first2];
            first2++;
            i++;
        }

        for(i = first; i <= last; i++){
            Array[i] = tempArray[i];
        }
}


template<class ItemType>
void Sort<ItemType>::mergeSort(ItemType Array[], int first, int last){
    if(first < last){
        int mid = first + (last - first) / 2;
            mergeSort(Array, first, mid);
            mergeSort(Array, mid + 1, last);
            merge(Array, first, mid, last);
    }
}