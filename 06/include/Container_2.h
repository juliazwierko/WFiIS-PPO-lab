#ifndef CONTAINER_2_H
#define CONTAINER_2_H

#include <array>

class Container_2 {
public:
    Container_2();
    ~Container_2();
    void Add(int value);
    int Delete();
    void Clear();
    void Print() const;
    bool IsEmpty() const;
    bool IsFull() const;
    int Size() const;

private:
    static const int capacity = 4;
    std::array<int, capacity> data;
    int size;
};

#endif // CONTAINER_2_H
