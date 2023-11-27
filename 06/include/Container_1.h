#pragma once 
#include <iostream>
using namespace std;

class Container_1{
public:
    Container_1() {}
    ~Container_1() {}
    int Delete();
    bool IsEmpty() const;
    bool IsFull() const;
    void Add(int value);
    void Print() const;
    int Size();
    void Clear();
private:
    static const int capacity = 4;
    int tab[capacity];
    int size = 0;
};
