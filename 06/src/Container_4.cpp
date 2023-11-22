#include "Container_4.h"
#include <iostream>

Container_4::Container_4() {}

Container_4::~Container_4() {}

void Container_4::Add(int value) {
    data.push_back(value);
}

int Container_4::Delete() {
    if (!IsEmpty()) {
        int value = data.back();
        data.pop_back();
        return value;
    } else {
        std::cerr << "#BLAD: Obiekt pusty" << std::endl;
        return -1; 
    }
}

void Container_4::Clear() {
    data.clear();
}

void Container_4::Print() const {
    std::cout << "#Zawartosc obiektu: ";
    // for (int i = value; i < data; i++){ 
    // komientarz dla siebie*
    for (int value : data) {
        std::cout << value << ",";
    }
    std::cout << std::endl;
}

bool Container_4::IsEmpty() const {
    return data.empty();
}

bool Container_4::IsFull() const {
    return false;
}

int Container_4::Size() const {
    return data.size();
}
