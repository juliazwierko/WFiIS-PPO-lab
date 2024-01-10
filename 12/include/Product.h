#pragma once

#include <iostream>

//             ／＞　 フ
//             | 　_　_| 
//           ／` ミ＿xノ 
//          /　　　　 |
//         /　 ヽ　　 ﾉ
//         │　　|　|　|
//     ／￣|　　 |　|　|
//     (￣ヽ ＿_ヽ_)__)
//      ＼二)

class Product {
public:
    Product(int t, int q) : type(t), quantity(q) {}

    Product& operator++();
    Product operator++(int);
    Product& operator--();
    Product operator--(int);
    Product operator+(int value);
    Product operator-(int value);
    Product operator*(int value);

    friend std::ostream& operator<<(std::ostream& os, const Product& p);
    
private:
    int type;
    int quantity;
};
