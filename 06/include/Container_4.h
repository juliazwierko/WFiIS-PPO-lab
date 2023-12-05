#pragma once
#include <iostream>
#include <vector>

class Container_4{
public:
    int Delete();
    bool IsEmpty() const;
    bool IsFull() const;
    void Add(int value);
    void Print() const;
    int Size() const;
    void Clear();
private:
    int capacity = 4;
    std::vector <int> tab;
};
