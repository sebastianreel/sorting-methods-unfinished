//Name: Sebastian Reel
//Date Due: 3/28/2021
//Project: Sorting Algorithms

#include "arraylist.h"

template<class ItemType>
ArrayList<ItemType>::ArrayList(){
    itemCount = 0;
    maxItems = DEFAULT_CAPACITY;
}

template<class ItemType>
bool ArrayList<ItemType>::isEmpty() const{
    return itemCount == 0;
}

template<class ItemType>
int ArrayList<ItemType>::getLength() const{
    return itemCount;
}

template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType& newEntry){
    bool canInsert = itemCount < maxItems && newPosition >= 1 && newPosition <= itemCount + 1;

    if(canInsert){
        for(int pos = itemCount; pos >= newPosition; pos--){
            item[pos + 1] = items[pos]
        }

        items[newPosition] = newEntry;
        itemCount++;
    }
    return canInsert;
}

template<class ItemType>
bool ArrayList<ItemType>::remove(int position){
    bool canRemove = position >= 1 && position <= itemCount;

    if(canRemove){
        for(int pos = position; pos < itemCount; pos++){
            items[pos] = items[pos + 1];
        }
        itemCount--;
    }
    return canRemove;
}

template<class ItemType>
void ArrayList<ItemType>::clear(){
    itemCount = 0;
}

template<class ItemType>
ItemType ArrayList<ItemType >::replace(int position, const ItemType& newEntry){
    bool canReplace = position >= 1 && position <= itemCount;

    if(canReplace){
        ItemType oldEntry = items[position];
        items[position] = newEntry;
        return oldEntry;
    } else {
        throw "Invalid position.";
    }
}

template<class ItemType>
ItemType ArrayList<ItemType>::getEntry(const ItemType& newEntry) const{
    bool canGet = position >= 1 && position <= itemCount;

    if(canGet){
        return items[position];
    } else {
        throw "Invalid position.";
    }
}