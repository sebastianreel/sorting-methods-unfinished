//Name: Sebastian Reel
//Date Due: 3/28/2021
//Project: Sorting Algorithms

#ifndef array_list
#define array_list

#include "listinterface.h"

template<class ItemType>
class ArrayList{
    static const int DEFAULT_CAPACITY = 100;
    ItemType items[DEFAULT_CAPACITY + 1];
    int itemCount;
    int maxCount;
public:
    ArrayList();

    bool isEmpty() const;
    int getLength() const;
    bool insert(int newPosition, const ItemType& newEntry);
    bool remove(int position);
    void clear();
    ItemType replace(int position, const ItemType& newEntry);
    ItemType getEntry(const ItemType& newEntry) const;

    ~ArrayList() {}
};
#include "arraylist.cpp"
#endif