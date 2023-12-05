#pragma once 
#include <iostream>
#include <array>

class Container_2{
public: 
    int Delete();
    bool IsEmpty() const;
    bool IsFull() const;
    void Add(int number);
    void Print() const;
    int Size() const;
    void Clear();
private:
    int size = 0;
    std::array <int, 4> tab;
};
