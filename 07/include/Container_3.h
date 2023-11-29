#pragma once
#include <iostream>

class Container_3 {
public:
/** @brief Konstruktor
*
* Funkcja inicjalizuje klase domyslnymi wartosciami
*
* @return nic nie zwraca
*/ 
    Container_3(int initialSize);

/** @brief Destruktor
*
* Funkcja niszczy obiekt
*
* @return nic nie zwraca
*/ 
    ~Container_3();

/** @brief Usuwanie elementu
*
* Funkcja usuwa element
*
* @return int
*/
    int Delete();

/** @brief Czy pusta.
*
* Funkcja zwraca informacje czy jest pusta
*
* @return bool, nic nie zwraca
*/
    bool IsEmpty() const;

/** @brief Czy pelna
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

/** @brief Wyswietlanie zawartosci
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

/** @brief Funkcja zwracajaca rozmiar.
*
* Funkcja zwraca prywatne pole klasy
*
* @return void, nic nie zwraca
*/
    int Size() const;


private:
    int* arr; 
    int capacity; 
    int size;

    void Resize();
};