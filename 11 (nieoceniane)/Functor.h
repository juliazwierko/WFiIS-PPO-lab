#pragma once
#include <iostream>
#include <string>
using namespace std;

class Functor {
public:
    Functor() : m_less(0), m_equal(0), m_greater(0) {}

    bool operator()(int a, int b) {
        if (a < b) {
            m_less++;
            return true;
        }
        else if (a == b) {
            m_equal++;
            return false;
        }
        else {
            m_greater++;
            return false;
        }
    }

    void wypiszStatystyki() {
        cout << "Liczba porownan:" << endl;
        cout << "'a' mniejsze 'b': " << m_less << endl;
        cout << "'a' rowne 'b': " << m_equal << endl;
        cout << "'a' wieksze 'b': " << m_greater << endl;
    }

private:
    int m_less;
    int m_equal;
    int m_greater;
};
