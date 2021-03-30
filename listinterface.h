//Name: Sebastian Reel
//Date Due: 3/28/2021
//Project: Sorting Algorithms

#ifndef list_interface
#define list_interface

template<class ItemType>
class ListInterface{
    public:
        virtual bool isEmpty() const = 0;
        virtual int getLength() const = 0;
        virtual bool insert(int newPostion, const ItemType& newEntry) = 0;
        virtual bool remove(int position) = 0;
        virtual void clear() = 0;
        virtual ItemType replace(int position, const ItemType& newEntry) = 0;
        virtual ItemType getEntry(const ItemType& newEntry) const = 0;

        virtual ~ListInterface(){}
};
#endif