#include "Container_1.h"
#include <iostream>

Container_1::Container_1(){
    size = 0;
}

Container_1::~Container_1(){
}

void Container_1::Add(int value) {
    if (size < capacity) {
        data[size++] = value;
    } else {
        std::cerr << "#BLAD: Obiekt zapelniony" << std::endl;
    }
}

int Container_1::Delete() {
    if (!IsEmpty()) {
        return data[--size];
    } else {
        std::cerr << "#BLAD: Obiekt pusty" << std::endl;
        return -1;
    }
}

void Container_1::Clear() {
    size = 0;
}

void Container_1::Print() const {
    std::cout << "#Zawartosc obiektu: \n";
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << ",";
    }
    std::cout << std::endl;
}

bool Container_1::IsEmpty() const {
    return size == 0;
}

bool Container_1::IsFull() const {
    return size == capacity;
}

int Container_1::Size() const {
    return size;
}
