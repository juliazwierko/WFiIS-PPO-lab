#ifndef LIST_H
#define LIST_H


// Element listy
struct slistEl
{
  slistEl * next;
  char data;
};

// Lista
struct slist
{
  slistEl * head;
};



/** @brief Tworzenie obszaru, ktory wskazuje na poczatek listy 
 * 
 * Funkcja tworzy wskaznik na head listy 
 * 
 * @param[in] list wskaznik do listy 
 * @return funkcja typu void, dlatego nic nie zwraca
 * 
*/
void init(slist * list);



/** @brief Przypisanie podanego char'a na poczatek listy 
 * 
 * Funkcja tworzy 'nowy koralik' - element, ktory przypisujemy na poczatek jus istniejujacej listy, gdzie nowy 
 * elemnt juz bedzie wskazywal na drugi(wczesniej to byl pierwszy element listy)
 * 
 * @param[in] list  wskaznik do listy
 * @praam[in] c wartosc ktora bedziemy przepisywac do stworzenego 'koralika', przyszlego elementa istniejejujacej listy 
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
void push_front(slist * list, char c);



/** @brief Przypisanie podanego char'a na koniec listy 
 * 
 * Funkcja tworzy 'nowy koralik' - element, ktory przypisujemy na koniec jus istniejujacej listy
 * 
 * @param[in] list  wskaznik do listy
 * @praam[in] c wartosc ktora bedziemy przepisywac do stworzenego 'koralika', przyszlego elementa istniejejujacej listy 
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
void push_back(slist * list, char c);



/** @brief Wyszukanie elementu w liscie.
*
* Funkcja przeszukuje liste w celu znalezienia podanego elementu.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
* NULL jesli lista nie posiada elementu o wartosci c
*/
slistEl * find(slist * list, char c);



/** @brief Wypisane wszystkich elementow listy.
 * 
 * Funckja wypisuje cala liste
 * 
 * @param[in] list wskaznik do listy
 * @return funkcja jest typu void. wiec nie zwraca nic.
*/
void printl(slist * list);

#endif
