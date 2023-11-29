#include "Container_1.h"

Container_1::Container_1() {
    size = 0;
}

int Container_1::Delete() {
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

bool Container_1::IsEmpty()const {
    return size == 0;
}

bool Container_1::IsFull()const {
    return size == capacity;
}

void Container_1::Add(int i) {
    if (IsFull()) {
        std::cout << "#ERROR: Obiekt jest pelny" << std::endl;
        
    } else {
        arr[size] = i;
        size++;
    }
}

void Container_1::Print()const {
    if (IsEmpty()) {
        std::cout << "#ERROR: Obiekt jest pusty" << std::endl;
    } else {
        std::cout << "#Zawartosc obiektu:" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << (i < size - 1 ? ", " : "\n");
        }
    }
}

void Container_1::Clear() {
    size = 0; 
}

int Container_1::Size()const {
    return size; 
}