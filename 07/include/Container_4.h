#pragma once
#include <iostream>
#include <vector>

class Container_4 {
public:
/** @brief Usuwanie elementu z wektora
*
* Funkcja ktora usuwa element element wektora
*
* @return int
*/
    int Delete(); 

/** @brief Sprawdzenia czy wektor jest pusty
*
* Funkcja zwraca informacje czy jest wektor pusty
*
* @return bool, nic nie zwraca, wartosc logiczna
*/
    bool IsEmpty() const; 

/** @brief Czywektor jest pelny
*
* Funkcja zwraca informacje czy jest pelna.
*
*
* @return void, nic nie zwraca
*/
    bool IsFull() const; 

/** @brief Dodawanie elementu.
*
* Funkcja dodaje element.
*
* @param[in] i  wartosc dodawanego elementu 
* @return void, nic nie zwraca
*/
    void Add(int i); 

/** @brief Wyswietlanie zawartosci wektora
*
* Funkcja wyswietla zawartosc klasy
*
* @return void, nic nie zwraca
*/
    void Print() const; 

/** @brief Oczyszczanie
*
* Funkcja resetuje zawartosc pola size
*
* @return void, nic nie zwraca
*/
    void Clear(); 

/** @brief Funkcja zwraca rozmiar.
*
* Funkcja zwraca prywatne pole klasy
*
* @return void, nic nie zwraca
*/
    int Size() const; 

private:
    std::vector<int> vec;
};
