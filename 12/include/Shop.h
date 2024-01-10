#pragma once

#include <vector>
#include "Product.h"

//    /\_/\     (\ __ /)   
//   ( ˶•o•˶)    ( •ω• )   
//    (ა🍱) J    (ა🍙૮)｡ P   

class Shop {
public:
    void Add(const Product& product);
    void Remove();

    Product& operator[](int index);
    Shop operator-(int value);
    Shop operator+(int value);
    Shop operator*(int value);

    void Clear();

    friend std::ostream& operator<<(std::ostream& os, const Shop& shop);
    
private:
    std::vector<Product> inventory;
};

