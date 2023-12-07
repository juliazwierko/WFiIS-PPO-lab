#include "Shop.h"

//Product
Product::Product (int a, int b) : _n1(a), _n2(b){}
void Product::Print() const
{
    std::cout << "\ntyp: " << _n1 << ", ilosc sztuk: " << _n2 << std::endl;
    std::cout << "---\n";
}

void Product::SetCard (int i)
{
    _n2 = i;
}

//Konstruktory
Shop::Shop()
{

}
Shop::Shop(Product elem1)
{
    vector.push_back(elem1);
}

Shop::Shop(Product elem1, Product elem2)
{
    vector.push_back(elem1);
    vector.push_back(elem2);

}

Shop::Shop(int size, Product *t[3])
{
    for(int i = 0; i < size; i++)
        vector.push_back(*t[i]);
}

Shop::Shop(std::vector <Product> v)
{
    for(Product item : v)
        vector.push_back(item);
}

Shop::~Shop()
{
    vector.clear();
}

Shop::Shop(Shop& copy)
{
    for(int i = 0; i < copy.vector.size(); i++)
        vector.push_back(copy.vector[i]);
}

//Metody
void Shop::Print()const
{
    std::cout << "Zawartosc skladu: \n";
    for(Product item: vector)
    std::cout << "typ: " << item._n1 << ", ilosc sztuk: " << item._n2 << std::endl;
}
void Shop::Remove()
{
    if(vector.size() == 0)
        std::cout <<"Blad: Pusto!" << std::endl;
    else
        vector.pop_back();
}
void Shop::Add(Product elem)
{
    vector.push_back(elem);
}

void Shop::Clear()
{
    vector.clear();
}

Shop::Shop(Shop&& other) : vector(std::move(other.vector)) {
    other.vector.clear();
}

Shop& Shop::operator=(Shop&& other) {
    if (this != &other) {
        vector = std::move(other.vector);
        other.vector.clear();
    }
    return *this;
}