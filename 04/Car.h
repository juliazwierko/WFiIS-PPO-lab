#pragma once 

#include <iostream> 
#include <cmath> 
using namespace std;
  
class Car{
public:
    /** @brief Ustawienie ID samochodu
    *
    * Funkcja ustawia numer ID samochodu.
    *
    * @param[in] a to numer identyfikacyjny 
    * @return funkcja nic nie zwraca
    */
    void SetID(int a);
    /**
     * @brief Ustawienie statusu samochodu
     *
     * Funckja ustawia status samochodu
     * 
     * @param[in] a to status samochodu (jest wlaczony czy wylaczony)
     * @return funckja nic nie zwraca 
     */
    void SetState(bool a);
    /**
     * @brief Ustawienie max ilosci paliwa w baku
     *
     * Funckja ustawia max ilsoc paliwa w baku
     * 
     * @param[in] a - waartosc ile max paliwa moze wmiescic sie w baku
     * @return funkcja nic nie zwraca 
     */
    void SetTankCapacity(double a);
    /**
     * @brief Ustawienie ile paliwa bedzie sie wykorzystywalo na 100 km
     * 
     * Funkcja ustawia ile ile paliwa bedzie sie wykorzystywalo na 100 km
     *
     * @param[in] a - ilsoc uzywania paliwa na 100 km
     */
    void SetConsumption(double a);
    /**
     * @brief Utawienie ilosci paliwa w baku
     *
     * Funkcja ustawia ile paliwa jest przechowywano w baku 
     * 
     * @param[in] a - ilosc paliwa 
     */
    void SetFuel(double a);
    /**
     * @brief Reprezentacja cech samochodu
     * 
     * Funkcja wyswietla wszystkie charakterestyki samochodu
     *
     * @return funkcja nic nie zwraca
     */
    void Presentation();
    /**
     * @brief Jazda samochodu
     * 
     * Funkcja rozpoczyna jazde samochodu 
     *
     * @param[in] distance - ilosc km do przejechania
     * @return funkcja nic nie zwraca 
     */
    void Drive(int distance);
    /**
     * @brief Dodanie paliwa do samochodu
     * 
     * Funkcja dodaje paliwo do samochodu 
     *
     * @param[in] fuel - ilosc paliwa do dodawania
     * @return funkcja nic nie zwraca 
     */
    void Refuel(int fuel);
    /**
     * @brief Uruchomienie silnika 
     * 
     * Funckja uruchamia silnik samochodu
     *
     * @return funckja nic nie zwraca 
     */
    void Start();
    /**
     * @brief Wylaczenie silnika 
     * 
     * Funckja wylacza silnik samochodu
     *
     * @return funckja nic nie zwraca 
     */
    void Stop();
private:
    int _id;
    bool _state;
    double _tank_capacity;
    double _consumption;
    double _fuel;
};
