#include "Container_3.h"

Container_3::Container_3(int initialSize) : size(0), capacity(initialSize) {
    arr = new int[capacity];
}

Container_3::~Container_3() {
    delete[] arr; 
}

int Container_3::Delete() {
    if (IsEmpty()) {
        std::cout << "#ERROR: Obiekt jest pusty" << std::endl;
        return -1; 
    } else {
        int deletedElement = arr[0];
        size--;

        for(int i = 0; i < size; i++)
        {
            arr[i] = arr[i+1];
        }
        return deletedElement;
    }
}

bool Container_3::IsEmpty() const {
    return size == 0;
}

bool Container_3::IsFull() const {
    return size == capacity;
}

void Container_3::Add(int i) {
    if (IsFull()) {
        Resize();
    }
    arr[size] = i;
    size++;
}

void Container_3::Print() const {
    if (IsEmpty()) {
        std::cout << "#Zawartosc obiektu: Obiekt jest pusty" << std::endl;
    } else {
        std::cout << "#Zawartosc obiektu:" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << (i < size - 1 ? ", " : "\n");
        }
    }
}

void Container_3::Clear() {
    size = 0;
}

int Container_3::Size() const {
    return size;
}

void Container_3::Resize() {
    capacity *= 2; 
    int* newArr = new int[capacity]; 

    
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr; 
    arr = newArr; 
}
