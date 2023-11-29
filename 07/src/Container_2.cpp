#include "Container_2.h"

Container_2::Container_2() : size(0) {
}

int Container_2::Delete() {
    if (IsEmpty()) {
        std::cout << "#ERROR: Obiekt jest pusty"  << std::endl;
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

bool Container_2::IsEmpty() const {
    return size == 0;
}

bool Container_2::IsFull() const {
    return size == capacity;
}

void Container_2::Add(int i) {
    if (IsFull()) {
        std::cout << "#ERROR: Obiekt jest pelny" << std::endl;
    } else {
        arr[size] = i;
        size++;
    }
}

void Container_2::Print() const {
    if (IsEmpty()) {
        std::cout << "#ERROR: Obiekt jest pusty" << std::endl;
    } else {
        std::cout << "#Zawartosc obiektu:" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << (i < size - 1 ? ", " : "\n");
        }
    }
}

void Container_2::Clear() {
    size = 0;
}

int Container_2::Size() const {
    return size;
}