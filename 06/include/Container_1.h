#ifndef CONTAINER_1_H
#define CONTAINER_1_H

class Container_1 {
public:
    /**
     * @brief konstruktor klasy
     * ustawiamy po 'deafult' pusty size, czyli 0;
    */
    Container_1();
    /**
     * @brief destruktor klasy
    */
    ~Container_1();

    /**
     * to jest funkcja przypisania wartosciej do tablicy
     * 
     * @brief funkcja dodaje to tablicy elementy
     * 
     * @param[in] value - wartosc do dodawania
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
     * to jest funkcja sprawdzenia pustosci tablicy
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
    //rozmiar tablicy
    int Size() const;

private:
    //statyczny rozmiar array zgodnie z trescia zadania
    static const int capacity = 4;
    int data[capacity];
    int size;
};

#endif // CONTAINER_1_H
