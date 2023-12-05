#pragma once
#include <iostream> 

class Container_1{
public: 
    Container_1(){}
    ~Container_1() {}
    int Delete();
    bool IsEmpty() const;
    bool IsFull() const;
    void Add(int number);
    void Print() const;
    void Clear();
    int Size(); 
private:
    int capacity = 4;
    int tab[4];
    int size = 0;
};

