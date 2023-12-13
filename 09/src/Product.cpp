#include "Product.h"

using namespace std;

int Compare(const Product& a, const Product& b) {
    if (a._n2 > b._n2) {
         return 1;
    } else if (a._n2 < b._n2) {
        return -1;
    } else {
        return 0;
    }
}

Product::Product(int a, int b) : _n1(a), _n2(b) {}

void Product::Print() const {
    cout << "typ: " << _n1 << ", ilosc sztuk: " << _n2 << endl;
    cout << "---\n";
}

void Product::SetCard(int a) {
    _n2 = a;
}

string Product::ToString() const {
    return "<typ=" + to_string(_n1) + ", ilosc=" + to_string(_n2) + ">";
}

Product::operator string() const {
    return ToString();
}

Product::operator int() const {
    return _n1;
}
