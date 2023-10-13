/*********************************************************************** 
Celem zadania jest napisanie kilku funkcji operujacych na ciagach.
Proszę zadbać o zarządzanie pamięcią!

Do zadania nalezy dopisac makefile. 

Pliku main.cpp nie można modyfikować!
 
Powodzenia! Rozwiązanie należy przesłać na UPEL. 
***********************************************************************/

#include "ciagi.h"
#include "ciagi.h"
#include <iostream>
#include <iomanip>
 
int main() 
{
    const int rozmiarCiagu =    6;
    const float roznicaCiagu =  2.3;
    const float ilorazCiagu  = -1.5;
       
    std::cout << "Ciag arytmetyczny" << std::endl;
    float * ciagArytmetyczny = inicjalizujArytmetyczny(rozmiarCiagu, roznicaCiagu);    
    wypiszCiag(rozmiarCiagu, ciagArytmetyczny);
    std::cout << "Suma = " << sumaCiagu(rozmiarCiagu, ciagArytmetyczny) << std::endl;
    
    std::cout << "Ciag geometyczny" << std::endl;
    float * ciagGeometyczny  = inicjalizujGeometyczny(rozmiarCiagu, ilorazCiagu); 
    wypiszCiag(rozmiarCiagu, ciagGeometyczny);
    std::cout << "Min = " << minimumCiagu(rozmiarCiagu, ciagGeometyczny) << ", " << "Max = " << maximumCiagu(rozmiarCiagu, ciagGeometyczny) << std::endl;

    std::cout << "\nNowy ciag" << std::endl;             
    const int nowyRozmiar = rozmiarCiagu - 2;
    float * nowyCiag = dodajCiagi(nowyRozmiar, ciagArytmetyczny, ciagGeometyczny); 
    wypiszCiag(nowyRozmiar, nowyCiag);

    // std::boolalpha powoduje wypisywanie bool jako false/true zmiast 0/1       
    std::cout << "\nJest arytmetyczny? " << std::endl;  
    std::cout << " Pierwszy = " << std::boolalpha 
              << czyJestArytmetyczny(rozmiarCiagu, ciagArytmetyczny) << std::endl;
    std::cout << " Drugi    = " << std::boolalpha 
              << czyJestArytmetyczny(rozmiarCiagu, ciagGeometyczny) << std::endl; 
    std::cout << " Trzeci   = " << std::boolalpha 
              << czyJestArytmetyczny(nowyRozmiar, nowyCiag) << std::endl;
        
    std::cout << "\n Sprzatanie!!! " << std::endl;
    
    posprzatajCiag(ciagArytmetyczny); 
    posprzatajCiag(ciagGeometyczny); 
    posprzatajCiag(nowyCiag); 
    
	return 0;
}

/************************* OUTPUT *************************
Ciag arytmetyczny
[0, 2.3, 4.6, 6.9, 9.2, 11.5]
Suma = 34.5
Ciag geometyczny
[1, -1.5, 2.25, -3.375, 5.0625, -7.59375]
Min = -7.59375, Max = 5.0625

Nowy ciag
[1, 0.8, 6.85, 3.525]

Jest arytmetyczny? 
 Pierwszy = true
 Drugi    = false
 Trzeci   = false

 Sprzatanie!!! 
**********************************************************/
