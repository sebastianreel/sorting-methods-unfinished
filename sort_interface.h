#pragma once
using namespace std;

class SortInterface{
public:
    virtual void printRun() = 0;
    virtual void printTotal() = 0;
    virtual ~SortInterface() {}
};
