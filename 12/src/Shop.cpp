#include "Shop.h"

void Shop::Add(const Product& product) {
    inventory.push_back(product);
}

void Shop::Remove() {
    if (!inventory.empty()) {
        inventory.pop_back();
    }
}

Product& Shop::operator[](int index) {
    return inventory[index];
}

Shop Shop::operator-(int value) {
    Shop other = *this;
    for (Product& p : other.inventory) {
        p = p - value;
    }
    return other;
}

Shop Shop::operator+(int value) {
    Shop other = *this;
    for (Product& p : other.inventory) {
        p = p + value;
    }
    return other;
}

Shop Shop::operator*(int value) {
    Shop other = *this;
    for (Product& p : other.inventory) {
        p = p * value;
    }
    return other;
}

void Shop::Clear() {
    inventory.clear();
}

std::ostream& operator<<(std::ostream& os, const Shop& shop) {
    if (shop.inventory.empty()) {
        os << "BLAD: Pusto !" << std::endl;
    } else {
        os << "---\n# Zawartosc/sklad:\n---\n";
        for (const Product& p : shop.inventory) {
            os << p;
        }
        os << "---" << std::endl;
    }
    return os;
}



