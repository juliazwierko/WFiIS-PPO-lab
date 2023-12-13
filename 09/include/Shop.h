#pragma once
#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

class Shop {
public:
    //konstruktor domniemany
    Shop();
    // konstruktor jednoargumentowy
    Shop(Product elem1);
    // konstruktor dwuargumentowy
    Shop(Product elem1, Product elem2);
    // konstruktor 
    Shop(int size, Product** t);
    
    Shop(const vector<Product>& v);

    Shop(const Shop& copy);
    //destruktor
    ~Shop();
    operator int() const;
    
    void Print() const;
    void Remove();
    void Add(Product elem);
    void Clear();

private:
    std::vector<Product> vector;
};
