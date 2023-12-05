#pragma once
#include <iostream> 

class Container_3{
public:
    Container_3(int initial_size){
        capacity = initial_size;
        size = 0;
        tab = new int[capacity];
    }
    ~Container_3(){
        delete [] tab;
        tab = nullptr;
    }
    void Add(int value);
    int Delete();
    bool IsEmpty() const;
    bool IsFull() const;
    void Print() const;
    int Size() const;
    void Clear();

private:
    int capacity;
    int size;
    int* tab;
};
