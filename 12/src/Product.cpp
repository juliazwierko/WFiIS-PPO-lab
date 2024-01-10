#include "Product.h"
#include <algorithm>

Product &Product::operator++()
{
    ++quantity;
    return *this;
}

Product Product::operator++(int)
{
    Product temp = *this;
    ++(*this);
    return temp;
}

Product &Product::operator--()
{
    if (quantity == 0)
    {
        return *this;
    }
    --quantity;

    return *this;
}

Product Product::operator--(int)
{
    Product temp = *this;
    --(*this);
    return temp;
}

Product Product::operator+(int value)
{
    return Product(type, quantity + value);
}

Product Product::operator-(int value)
{
    if (quantity == 0)
    {
        return Product(type, quantity);
    }
    return Product(type, std::max(quantity - value, 0));
}

Product Product::operator*(int value)
{
    return Product(type, quantity * value);
}

std::ostream &operator<<(std::ostream &os, const Product &p)
{
    os << "typ: " << p.type << ", ilosc sztuk: " << p.quantity << std::endl;
    return os;
}

