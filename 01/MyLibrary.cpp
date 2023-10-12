#include "MyLibrary.h"

/**
 * @brief ta funkcja sluzy dla wypisywania name'a uzytkownika
 * @param funkcja przyjmuje zmienna typu const char *, czyli nasz name
 * @return zwaraca wartosc typu void, czyli nic. Mamy tylko std::cout (wypisywanie tego, 
 * co podalismy jako argument)
*/
void PrintName(const char *a){
    std::cout << "[INFO]:: Name: " << a << std::endl;
}

/**
 * @brief ta funkcja sluzy dla wypisywania sciezki do file'a
 * @param funkcja przyjmuje zmienna typu const char *, czyli sciezke
 * @return zwaraca void, czyli nic. Mamy tylko std::cout (wypisywanie tego,
 * co podalismy jako argument)
*/
void PrintInfo(const char *a){
    std::cout << "[INFO]:: " << a << std::endl;
}
