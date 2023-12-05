#include "Container_2.h"

int Container_2::Delete(){
    if(!IsEmpty()){
        return tab[size--];
    }
    else{
        std::cout << "#BLAD: Obiekt pusty\n";
        return -1;
    }
}
    
bool Container_2::IsEmpty() const{
    return size == 0;
}

bool Container_2::IsFull() const{
    return size == 4;
}

void Container_2::Add(int number){
    if(!IsFull()){
        tab[size++] = number;
    }
    else{
        std::cout << "#BLAD: Obiekt zapelniony\n";
    }
}

void Container_2::Print() const{
    std::cout << "#Zawartosc obiektu:\n";
    for(int i = 0; i < size; i++){
        std::cout << tab[i] << ",";
    }
    std::cout << std::endl;
}

int Container_2::Size() const{
    return size;
}

void Container_2::Clear(){
    size = 0;
}
