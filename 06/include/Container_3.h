#ifndef CONTAINER_3_H
#define CONTAINER_3_H

class Container_3 {
public:
    Container_3(int initialSize);
    ~Container_3();
    void Add(int value);
    int Delete();
    void Clear();
    void Print() const;
    bool IsEmpty() const;
    bool IsFull() const;
    int Size() const;

private:
    int* data;
    int size;
    int capacity;
};

#endif // CONTAINER_3_H
