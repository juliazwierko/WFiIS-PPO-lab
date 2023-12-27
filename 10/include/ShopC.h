#pragma once
#include <iostream>
#include <utility>
using namespace std;
#include "Product.h"

class ShopC{
public:
    ShopC(){
        tab = new Product[10];
    }
    ~ShopC(){
        delete [] tab;
    }
    //konstruktor kopiujacy
    ShopC(const ShopC &O){
        size = O.size;
        tab = new Product[size];
        for(int i = 0; i < O.size; i++){
            tab[i] = O.tab[i];
        }
    }
    //operator "="
    ShopC& operator = (const ShopC &object){
        size = object.size;
        if(this != &object){
            for(int i = 0; i < size; i++){
                tab[i] = object.tab[i];
            }
        }
        return *this;
    }
    ShopC(ShopC &&O){
        size = O.size;
        tab = new Product[size];
        for(int i = 0; i < O.size; i++){
            tab[i]._ilosc = O.tab[i]._ilosc;
            tab[i]._typ = O.tab[i]._typ;
            // tab[i]._ilosc = exchange(O.tab[i]._ilosc, 0);
            // tab[i]._typ = exchange(O.tab[i]._typ, 0);
        }
    }

    void Print() const;
    void Remove();
    void Add(const Product &a);
    void Clear();
private:
    Product *tab;
    int size = 0;
};
