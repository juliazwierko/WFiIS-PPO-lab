#include "Container_1.h"
using namespace std;
 
int Container_1::Delete(){
    if(!IsEmpty()){
        
        return tab[size--];
    }
    else{
        cout << "#BLAD: Obiekt pusty\n";
        return -1;
    }
}

bool Container_1::IsEmpty() const{
    return size == 0;
}

bool Container_1::IsFull() const{
    return size == capacity;
}

void Container_1::Add(int number){
    if(!(IsFull())){
        tab[size++] = number;
    }
    else{
        cout << "#BLAD: Obiekt zapelniony\n";
    }

}

void Container_1::Print() const{
    cout << "#Zawartosc obiektu:\n";
    for(int i = 0; i < size; i++){
        cout << tab[i] << ",";
    }
    cout << endl;
}

int Container_1::Size(){
    return size;
}

void Container_1::Clear(){
    size = 0;
}


