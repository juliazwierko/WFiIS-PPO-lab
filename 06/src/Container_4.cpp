#include "Container_4.h"

int Container_4::Delete(){
    if(!IsEmpty()){
        int data = tab.back();
        tab.pop_back();      
        return data;
    }
    else{
        std::cout << "#BLAD: Obiekt pusty\n";
        return -1;
    }
}

bool Container_4::IsEmpty() const{
    return tab.empty(); 
}

bool Container_4::IsFull() const{
    return false;
}

void Container_4::Add(int value){
    tab.push_back(value);
}

void Container_4::Print() const{
    std::cout << "#Zawartosc obiektu:\n";
    for(int value : tab){
        std::cout << value << ",";
    }
    std::cout << std::endl;
}

int Container_4::Size() const{
    return tab.size();
}

void Container_4::Clear(){
    tab.clear();
}
