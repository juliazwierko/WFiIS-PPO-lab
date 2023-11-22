#include "Container_2.h"
#include <iostream>

Container_2::Container_2(){
    size = 0;
}

Container_2::~Container_2() {

}

void Container_2::Add(int value) {
    if (size < capacity) {
        data[size++] = value;
    } else {
        std::cerr << "#BLAD: Obiekt zapelniony" << std::endl;
    }
}

int Container_2::Delete() {
    if (!IsEmpty()) {
        return data[--size];
    } else {
        std::cerr << "#BLAD: Obiekt pusty" << std::endl;
        return -1; 
    }
}

void Container_2::Clear() {
    size = 0;
}

void Container_2::Print() const {
    std::cout << "#Zawartosc obiektu: ";
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << ",";
    }
    std::cout << std::endl;
}

bool Container_2::IsEmpty() const {
    return size == 0;
}

bool Container_2::IsFull() const {
    return size == capacity;
}

int Container_2::Size() const {
    return size;
}
