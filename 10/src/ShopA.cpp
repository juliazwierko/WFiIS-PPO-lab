#include "ShopA.h"

void ShopA::Print() const{
    cout << "---\n# Zawartosc/sklad:\n";
    for(int i = 0; i < size; i++){
        cout    << "typ: " << tab[i]._typ
                << ", ilosc: " << tab[i]._ilosc << endl; 
    }
    cout << "---\n";
}

void ShopA::Add(Product &O){
    tab[size]._typ = O._typ;
    tab[size]._ilosc = O._ilosc;
    size++;
}

void ShopA::Remove(){
    if(size == 0){
        cout << "BLAD: Pusto !\n";
        return;
    }
    size--;
}

void ShopA::Clear() {
    for(int i = 0; i < size; i++){
        tab[i]._typ = tab[i]._ilosc = 0;
    }
    size = 0;
}

ShopA::ShopA(const ShopA &O){
    size = O.size;
    for(int i = 0; i < O.size; i++){
        tab[i] = O.tab[i];
    }
    size = O.size;
}
