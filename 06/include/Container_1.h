#ifndef CONTAINER_1_H
#define CONTAINER_1_H

class Container_1 {
public:
    Container_1();
    ~Container_1();
    void Add(int value);
    int Delete();
    void Clear();
    void Print() const;
    bool IsEmpty() const;
    bool IsFull() const;
    int Size() const;

private:
    static const int capacity = 4;
    int data[capacity];
    int size;
};

#endif // CONTAINER_1_H
