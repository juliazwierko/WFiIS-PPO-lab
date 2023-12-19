#include "Shop.h"

Shop::Shop(const Product &a){
    v.push_back(a);
}

Shop::Shop(const Product &a, const Product &b){
    v.push_back(a);
    v.push_back(b);
}

void Shop::Add(Product &a){
    v.push_back(a);
}

Shop::Shop(int size, Product** t){
    for(int i = 0; i < size; i++){
        v.push_back(*t[i]);
    }
}

Shop::Shop(vector<Product> container){
    for (const auto &item : container){
        v.push_back(item);
    }
}


void Shop::Print() const{
    cout << "---\n#Zawartosc/sklad: \n";
    if(v.empty()){
        cout << "\n";
    }
    else {
        for(auto & item : v){
            item.Print();
        }
    }
    cout << "---";         
}

void Shop::Remove() {
    if(v.empty()){
        cout << "\nBLAD: Pusto !\n";
    }
    else 
        v.pop_back();
}