#include "Product.h"

int Compare(const Product& a, const Product& b){
    if(b._ilosc>a._ilosc)
        return -1;
    else if(b._ilosc<a._ilosc)
        return 1;
    else{
         return 0;
    } 
}

void Product::Print() const{
    cout    << "typ: " << _typ 
            << ", ilosc sztuk: " << _ilosc  
            << endl;
}

void Product::SetCard(int numer) {
    _ilosc = numer;
}

