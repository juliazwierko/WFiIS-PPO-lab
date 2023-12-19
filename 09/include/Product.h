#pragma once 
#include <iostream>
#include <string>

using namespace std;

class Product{
public:
    friend class Shop;
    friend int Compare(const Product& a, const Product& b);

    Product() : _typ(0), _ilosc(0) {}
    Product(int typ, int ilosc) : _typ(typ), _ilosc(ilosc) {}
    explicit Product(int id) : _typ(id), _ilosc(0) {}
    Product(const Product &O) : _typ(O._typ) ,_ilosc(O._ilosc) {}
    ~Product() {} 

    explicit operator int() const{
        return (int)(this->_typ);
    }

    void Print() const;
    void SetCard(int numer);
    string ToString() const{
        string nowy = "<typ: " + to_string(this->_typ) + ", ilosc: " + to_string(this->_ilosc) + ">";
        return nowy;
    }
    operator string() const{
        string nowy = this->ToString();
        return nowy;
    }   

private:
    int _typ;
    int _ilosc;
};

