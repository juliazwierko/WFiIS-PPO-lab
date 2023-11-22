#ifndef CONTAINER_4_H
#define CONTAINER_4_H
#include <vector>

class Container_4 {
public:
     /**
     * to jest konstruktor, przypisujemy mu size 0
    */
    Container_4();
    /**
     * to jest destruktor
    */
    ~Container_4();

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
    //rpzmiar tablicy
    int Size() const;

private:
    std::vector<int> data;
};

#endif // CONTAINER_4_H
