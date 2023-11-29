#include "Container_4.h"


int Container_4::Delete() {
    if (IsEmpty()) {
        std::cout << "#ERROR: Obiekt jest pusty" << std::endl;
        return -1; 
    } 

    int deletedElement = vec[0];
    
    for (size_t i = 1; i < vec.size(); i++) {
        vec[i - 1] = vec[i];
    }

    vec.pop_back();

    return deletedElement;
}


bool Container_4::IsEmpty() const {
    return vec.empty(); 
}

bool Container_4::IsFull() const {
     return false; 
}

void Container_4::Add(int i) {
    vec.push_back(i); 
}

void Container_4::Print() const {
    if (IsEmpty()) {
        std::cout << "#ERROR: Obiekt jest pusty" << std::endl;
    } else {
        std::cout << "#Zawartosc obiektu:" << std::endl;
        for (int item : vec) {
            std::cout << item << ", ";
        }
        std::cout << std::endl;
    }
}

int Container_4::Size() const {
    return vec.size();
}


void Container_4::Clear() {
    vec.clear(); 
}

