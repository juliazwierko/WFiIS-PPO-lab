#pragma once 
#include <iostream>
#include <string> 
using namespace std;

class Functor{
public:
    Functor() : _mniejsze(0), _rowne(0), _wieksze(0) {}

    bool operator() (int num1, int num2){
        if (num1 < num2){
            _mniejsze++;
            return true;
        }
        else if(num1 == num2){
            _rowne++;
            return false;
        }
        else{
            _wieksze++;
            return false;
        }
    }

    void wypiszStatystyki(){
        cout << "Liczba porownan:\n";
        cout << "'a' mniejsze 'b': " << _mniejsze << endl;
        cout << "'a' rowne 'b': " << _rowne << endl;
        cout << "'a' wieksze 'b': " << _wieksze << endl;
    }


private:
    int _mniejsze;
    int _rowne;
    int _wieksze;
};
