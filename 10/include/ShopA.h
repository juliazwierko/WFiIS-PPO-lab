#pragma once 
#include <iostream>
using namespace std;
#include "Product.h"

//rule of 3 
class ShopA{
public:
    ShopA() {
        for(int i = 0; i < 10; i++){
            tab[i]._typ = tab[i]._ilosc = 0;
        }
    }
    ~ShopA() {}
    
    //konstruktor kopiujacy
    ShopA(const ShopA &O);
    //operator "="
    ShopA& operator = (const ShopA &object){
        size = object.size;
        if(this != &object){
            for(int i = 0; i < size; i++){
                tab[i] = object.tab[i];
            }
        }
        return *this;
    }
    
    void Print() const;
    void Add(Product &O);
    void Remove();
    void Clear();
private:
    Product tab[10];
    int size = 0;
};
