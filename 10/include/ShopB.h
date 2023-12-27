#pragma once
#include <iostream>
using namespace std;
#include "Product.h"

class ShopB{
public:
    ShopB(){
        tab = new Product[10];
    }
    ~ShopB(){
        delete [] tab;
    }
    ShopB(const ShopB &O){
        size = O.size;
        tab = new Product[size];
        for(int i = 0; i < O.size; i++){
            tab[i] = O.tab[i];
        }
    }

    //operator "="
    ShopB& operator = (const ShopB &object){
        size = object.size;
        if(this != &object){
            for(int i = 0; i < size; i++){
                tab[i] = object.tab[i];
            }
        }
        return *this;
    }


    void Print() const;
    void Remove();
    void Add(const Product &a);
    void Clear();
private:
    Product *tab;
    int size = 0;
};
