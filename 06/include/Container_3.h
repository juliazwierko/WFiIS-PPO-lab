#ifndef CONTAINER_3_H
#define CONTAINER_3_H

class Container_3 {
public:
    /**
     * to jest konstruktor, przypisujemy mu size 0
    */
    Container_3(int initialSize);
    /**
     * to jest destruktor
    */
    ~Container_3();


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
    //rozmiar zadanej teblicy;
    int Size() const;

private:
    int* data;
    int size;
    int capacity;
};

#endif // CONTAINER_3_H
