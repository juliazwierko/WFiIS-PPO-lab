#include "Container_3.h"

int Container_3::Delete(){
    if(!IsEmpty()){
        return tab[--size];
    }
    else{
        std::cout << "#BLAD: Obiekt pusty";
        return -1;
    }
}

bool Container_3::IsEmpty() const {
    return size == 0;
}

bool Container_3::IsFull() const {
    return size == capacity;
}

void Container_3::Add(int value){
    if(!IsFull()){
        tab[size++] = value;
    }
    else{
        int *new_tab = new int[2*capacity];
        for(int i = 0; i < size; i++){
            new_tab[i] = tab[i];
        }
        delete [] tab;
        tab = new_tab;
        tab[size++] = value;
    }
}

void Container_3::Print() const{
    std::cout << "#Zawartosc obiektu:\n";
    for(int i = 0; i < size; i++){
        std::cout << tab[i] << ",";
    }
    std::cout << std::endl;
}

int Container_3::Size() const{
    return size;
}

void Container_3::Clear(){
    size = 0;
}
