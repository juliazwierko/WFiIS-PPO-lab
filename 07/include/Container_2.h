#pragma once
#include <iostream>
#include <array>

class Container_2 {
public:
/** @brief Konstruktor
*
* inicjalizowanie klasy domyslnymi wartosciami
*
* @return nic nie zwraca
*/
    Container_2(); 

/** @brief Usuwanie elementu
*
* Funkcja ktora usuwa element element
*
* @return int
*/
    int Delete(); 

/** @brief Sprawdzanie czy tablica jest pusta.
*
* Funkcja zwraca informacje czy jest pusta
*
* @return bool, nic nie zwraca
*/
    bool IsEmpty()const;


/** @brief Sprawdzenie czy tablica jest pelna
*
* Funkcja zwraca informacje czy jest pelna.
*
*
* @return void, nic nie zwraca
*/
    bool IsFull()const;

/** @brief Dodawanie elementu.
*
* Funkcja dodaje element.
*
* @param[in] i  wartosc dodawanego elementu 
* @return void, nic nie zwraca
*/
    void Add(int i); 

/** @brief Wyswietlanie zawartosci
*
* Funkcja wyswietla zawartosc klasy
*
* @return void, nic nie zwraca
*/
    void Print()const; 

/** @brief Oczysczenie tablicy
*
* Funkcja resetuje zawartosc pola size
*
* @return void, nic nie zwraca
*/
    void Clear();

/** @brief Funkcja zwracajaca rozmiar.
*
* Funkcja zwraca prywatne pole klasy
*
* @return void, nic nie zwraca
*/
    int Size()const;


private:
    static const int capacity = 4;
    std::array<int, capacity> arr; 
    int size; 
};