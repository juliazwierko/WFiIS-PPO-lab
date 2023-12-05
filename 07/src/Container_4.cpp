#include "Container_4.h"

int Container_4::Delete(){
    if(!IsEmpty()){
        int old_val = tab.back();
        std::vector<int> new_tab;
        for(int i = 0; i < Size()-1; i++){
            new_tab.push_back(tab[i+1]);
        }
        tab = new_tab;   
        return old_val;
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
