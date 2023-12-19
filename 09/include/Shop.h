#pragma once 
#include <iostream>
#include <vector>
#include <string>
#include <utility> 
#include "Product.h"

using namespace std;

class Shop{
public:
    Shop() {}
    ~Shop() {}
    Shop(const Product &a);
    Shop(const Product &a, const Product &b);
    Shop(int size, Product* t[size]);
    Shop(vector<Product> container);

    Shop(const Shop& a){
        v = a.v;
    }
    Shop(Shop &&a){
        v = a.v;
        a.Clear();
    }

    void Print() const;
    void Remove();
    void Add(Product &a);
    void Clear(){
        v.clear();
    }
    
    operator int() const{
        int suma = 0;
        for(int i = 0; i < v.size(); i++){
            suma += v[i]._ilosc;
        }
        return suma;
    }
private:
    vector <Product> v;
};