#include "Shop.h"

void Product::Print() const {
    cout << "typ: " << _typ << ", ilosc sztuk: " << _ilosc << endl;
    cout << "---\n";
}

void Product::SetCard(int num){
    _ilosc = num;
}

void Shop::Print() const {
    cout << "# Zawartosc/sklad:\n";
    cout << "---\n";
    if(shop.size()==0){
        
    }
    else{
        for(Product item : shop){
            cout << "typ: " << item._typ << ", ilosc sztuk: " << item._ilosc << std::endl;
        }
    }
    cout << "---\n";
}

void Shop::Remove() {
    if(shop.size()==0){
        cout << "BLAD: Pusto !\n";
        cout << "---\n";
        return;
    }
    else{
        shop.pop_back();
    }
}

void Shop::Add(Product item){
    shop.push_back(item);
}

void Shop::Clear(){
    shop.clear();
}
