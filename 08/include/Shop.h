#pragma once 
#include <vector>
#include <iostream>

using namespace std;

class Shop;

class Product{
    friend class Shop;
public:
    Product(int typ, int ilosc) : _typ(typ), _ilosc(ilosc) {}    
    void Print() const;
    void SetCard(int num);
private:
    int _typ;
    int _ilosc;
};

class Shop{
public:
    Shop(){

    }
    Shop(Product product){
        shop.push_back(product);
    }
    Shop(Product product1, Product product2){
        shop.push_back(product1);
        shop.push_back(product2);
    }
    Shop(int size, Product* t[3]){
        for(int i = 0; i < size; i++){
        shop.push_back(*t[i]);
        }   
    }
    //konstruktor kopiujacy
    Shop(const vector <Product>& dane){
        for(Product range : dane){
            shop.push_back(range);
        }
    }
    //konstruktor kopiujacy
    Shop(const Shop &copy_shop){
        for(int i = 0; i < copy_shop.shop.size(); i++){
            shop.push_back(copy_shop.shop[i]);
        }
    }
    
    void Clear();
    void Add(Product item);
    void Print() const;
    void Remove();
private:
    vector <Product> shop;
};
