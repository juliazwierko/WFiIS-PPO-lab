#pragma once
#include <iostream>
#include <vector>

class Shop;

class Product{
    friend class Shop;
public:
    Product (int a, int b);
    void Print() const;
    void SetCard(int a);
    
private:
    int _n1;
    int _n2;
};

class Shop{
public:
    Shop();
    Shop(Product elem1);
    Shop(Product elem1, Product elem2);
    Shop(int size, Product *t[3]);
    Shop(std::vector<Product> v);
    Shop(Shop&);
    ~Shop();
    void Print()const;
    void Remove();
    void Add(Product elem);
    void SetCard (int i);
    Shop(Shop&& other);
    Shop& operator=(Shop&& other);
    void Clear();
    
private:
std::vector <Product> vector;
};