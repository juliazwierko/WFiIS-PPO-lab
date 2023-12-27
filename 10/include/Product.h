#pragma once 
#include <iostream>
using namespace std;

//rule of 0;
class Product{
public:
    friend class ShopA;
    friend class ShopB;
    friend class ShopC;
    
    Product() : _typ(0), _ilosc(0) {}
    ~Product() {}
    Product(int typ, int ilosc) : _typ(typ), _ilosc(ilosc) {}

    void Print() const;
    
private:
    int _typ;
    int _ilosc;
};
