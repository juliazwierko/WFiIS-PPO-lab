#pragma once
#include <iostream>

//Niestety nie dalam rady prez CMakeLists, wpisalalam PRINT_RESULTS 1 
//jako elemnt define'a i sprawia to to, ze dziala kompilujac przez make'a
// #define PRINT_RESULTS 1
//a juz dalam rade, sa juz zmiany w cmakelists

using namespace std;

/**
 * @brief funkcja tworzaca dynamicznie tablice
 * 
 * Funkcja przy pomocy operatora new tworzy dynamicznie tablice, 
 * skladajacych sie z elementow typu int 
 *
 * @param[in] size - rozmiar naszej tablicy/ile elementow w sobie przechowuje
 * @return funkcja zwraca wskaznik na pierwszy element stworzona dynamicznie 
 *         tablicy
 * 
*/
int* InitArray(int size);

/**
 * @brief funkcja ktora kazdemu elementowi przpisuje silne(!) liczby od 0 do wartosci size
 * 
 * Funkcja przypisuje kazdemu elementowi iloczyn poprzedniej liczby 
 *
 * @param[in] tab - wsaznik na pierwszy element listy 
 * @param[in] size - rozmiar naszej tablicy/ile elementow w sobie przechowuje
 * @return funkcja zwaraca wczesniej przekazany wskaznik na pierwszy element 
 *         tablicy tab, tylko zmenia jego poszczegolna wartosc, zgodnie z opisem 
 *          dzialania naszej funkcji.
 * 
*/
void CreateSequence(int* tab, int size);

/**
 * @brief funkcja zwalniajaca pamiec dynamicznie stworzonej tablicy 
 * 
 * Funkcja przy pomocy operatora delete[] zwalnia pamiec dynamicznie stworzonej 
 * tablicy 
 *
 * @param[in] tab - wsaznik na pierwszy element listy 
 * @return funkcjia typu void, czyli nic nie zwraca. 
 * 
*/
void DeleteArray(int* tab);