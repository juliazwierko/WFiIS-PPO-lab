#pragma once
#include <iostream>


// Element listy
struct slistEl
{
  char data;
  slistEl *next;
};

// Lista
struct slist
{
  slistEl * head;
};


void init(slist * list);

void push_front(slist * list, char c);

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

void printl(slist * list);
