#include "ShopC.h"

void ShopC::Print() const{
    cout << "---\n# Zawartosc/sklad:\n";
    for(int i = 0; i < size; i++){
        cout << "typ: " << tab[i]._typ << ", ilosc sztuk: " << tab[i]._ilosc << endl;
    }
    cout << "---\n";
}
void ShopC::Remove(){
    if(size == 0){
        cout << "BLAD: Pusto !\n";
        return;
    }
    size--;
    Product *new_tab = new Product[size];
    for(int i = 0; i < size; i++){
        new_tab[i] = tab[i];
    }
    delete [] tab;
    tab = new_tab;
}

void ShopC::Add(const Product& a){
    size++;
    Product *new_tab = new Product[size];
    for(int i = 0; i < size-1; i++){
        new_tab[i] = tab[i];
    }
    new_tab[size-1]._typ = a._typ;
    new_tab[size-1]._ilosc = a._ilosc;
    delete [] tab;
    tab = new_tab;
}

void ShopC::Clear(){
    size = 0;
}
