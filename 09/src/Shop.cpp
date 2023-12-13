#include "Shop.h"

using namespace std;

Shop::Shop()
{}

Shop::operator int() const {
    int sum = 0;
    for (const Product& item : vector) {
        sum += item._n2;
    }
    return sum;
}

Shop::Shop(Product elem1) {
    vector.push_back(elem1);
}

Shop::Shop(Product elem1, Product elem2) {
    vector.push_back(elem1);
    vector.push_back(elem2);
}

Shop::Shop(int size, Product** t) {
    for (int i = 0; i < size; i++) {
        vector.push_back(*t[i]);
    }
}

Shop::Shop(const std::vector<Product>& v) : vector(v) {}

Shop::Shop(const Shop& copy) : vector(copy.vector) {}

Shop::~Shop() {
    vector.clear();
}

void Shop::Print() const {
    if (vector.empty()) {
        cout << "BLAD: Pusto !" << std::endl;

    } else {
        for (const auto& item : vector) {
            item.Print();
        }
    }
}

void Shop::Remove() {
    if (!vector.empty()) {
        vector.pop_back();
    }
}

void Shop::Add(Product elem) {
    vector.push_back(elem);
}

void Shop::Clear() {
    vector.clear();
}
