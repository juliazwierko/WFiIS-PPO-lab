#include "Container_3.h"
#include <iostream>

Container_3::Container_3(int initialSize){
    size = 0; 
    capacity = initialSize;
    data = new int[capacity];
}
Container_3::~Container_3() {
    delete[] data;
}

void Container_3::Add(int value) {
    if (size < capacity) {
        data[size++] = value;
    } else {
        //zamiana rozmiaru w przypadku przepelnienia tablicy!!!
        int* newData = new int[2 * capacity];
        for (int i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity *= 2;
        data[size++] = value;
        // delete [] newData;
    }
}

int Container_3::Delete() {
    if (!IsEmpty()) {
        return data[--size];
    } else {
        std::cerr << "#BLAD: Obiekt pusty" << std::endl;
        return -1; 
    }
}

void Container_3::Clear() {
    size = 0;
}

void Container_3::Print() const {
    std::cout << "#Zawartosc obiektu: ";
    std::cout << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << ",";
    }
    std::cout << std::endl;
}

bool Container_3::IsEmpty() const {
    return size == 0;
}

bool Container_3::IsFull() const {
    return size == capacity;
}

int Container_3::Size() const {
    return size;
}
