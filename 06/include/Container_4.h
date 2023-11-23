#ifndef CONTAINER_4_H
#define CONTAINER_4_H
#include <vector>

class Container_4 {
public:
    Container_4();
    ~Container_4();
    void Add(int value);
    int Delete();
    void Clear();
    void Print() const;
    bool IsEmpty() const;
    bool IsFull() const;
    int Size() const;

private:
    std::vector<int> data;
};

#endif // CONTAINER_4_H
