#ifndef CONTAINER_2_H
#define CONTAINER_2_H

#include <array>

class Container_2 {
public:
    /**
     * to jest konstruktor, przypisujemy mu size 0
    */
    Container_2();
    /**
     * to jest destruktor
    */
    ~Container_2();

    /**
     * to jest funkcja dodawania wartosciej fo tablicy
     * 
     * @brief funkcja dodaje to tablicy elementy
     * 
     * @param[in] value - wartosci do dodawania
     * @return - nic nie zwraca
    */
    void Add(int value);
     /**
     * to jest funkcja usuwania wartosciej z tablicy
     * 
     * @brief funkcja usuwa z tablicy elementy
     * 
     * @param[in] nic nie przyjmuje
     * @return - nic nie zwraca
    */
    int Delete();
     /**
     * to jest funkcja wyczysczenia wartosciej z tablicy
     * 
     * @brief funkcja usuwa z tablicy elementy
     * 
     * @param[in] nic nie przyjmuje
     * @return - nic nie zwraca
    */
    void Clear();
     /**
     * to jest funkcja wypisania wartosciej z tablicy
     * 
     * @brief funkcja wypisuje z tablicy elementy
     * 
     * @param[in] nic nie przyjmuje
     * @return - nic nie zwraca
    */
    void Print() const;
     /**
     * to jest funkcja sprawdzenia wypelnionosc tablicy
     * 
     * @brief funkcja sprawdza z tablicy elementy
     * 
     * @param[in] nic nie przyjmuje
     * @return - nic nie zwraca
    */
    bool IsEmpty() const;
      /**
     * to jest funkcja sprawdzenia wypelnionosc tablicy
     * 
     * @brief funkcja sprawdza z tablicy elementy
     * 
     * @param[in] nic nie przyjmuje
     * @return - nic nie zwraca
    */
    bool IsFull() const;
    //rozmiar tablciy
    int Size() const;

private:
    static const int capacity = 4;
    std::array<int, capacity> data;
    int size;
};

#endif // CONTAINER_2_H
