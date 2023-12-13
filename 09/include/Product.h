#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product {
    friend class Shop; 
    friend int Compare(const Product& a, const Product& b);

public:
    Product(int a = 0, int b = 0); 
    void Print() const;
    void SetCard(int i);

    string ToString() const;
    operator string() const;
    operator int() const; 

private:
    int _n1;
    int _n2;
};
