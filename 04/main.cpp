// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
// Przykład polecenia 
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Pliku main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem lab04/
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar
// * wszystkie funkcje w plikach *.h powinny być okomentowane wg formatu wprowadzonego 
// * na wcześniejszych zajęciach


#include <iostream>
#include "Car.h"
#include "Service.h"
using namespace std;


int main(int argc, char** argv) 
{
	Car MyCar1;
	
	MyCar1.SetID(1);
	MyCar1.SetState(false);
	MyCar1.SetTankCapacity(40.0);
	MyCar1.SetConsumption(10.0);
	MyCar1.SetFuel(0.0);

	MyCar1.Presentation();
	
	MyCar1.Drive(-5);
	MyCar1.Drive(20);
	MyCar1.Start();
	MyCar1.Refuel(10);
	MyCar1.Drive(20);
	MyCar1.Start();
	MyCar1.Drive(20);
	MyCar1.Refuel(100);
	MyCar1.Stop();
	MyCar1.Refuel(-10);
	MyCar1.Refuel(100);
	MyCar1.Start();
	MyCar1.Drive(20);
	MyCar1.Drive(2000);
	MyCar1.Stop();

	MyCar1.Presentation();
	
//////////////////////////////////////	

	Car * pMyCar1 = &MyCar1;
	
//////////////////////////////////////	

	Service CarService;
	
	CarService.Test(&MyCar1, 10.0);
	MyCar1.Presentation();

	CarService.Test(pMyCar1, 5.0);	
	MyCar1.Presentation();

	CarService.TestCopy(MyCar1, 20.0);
	MyCar1.Presentation();

//////////////////////////////////////	
	

	return 0;
}

/** Wynik dzialania programu:

### Prezentacja ###
Identyfikator samochodu: 1
Samochod jest wylaczony
Pojemnosc baku wynosi 40 litrow
Srednie spalanie wynosi 10 litrow / 100 km
W baku jest 0 litrow paliwa

### Jazda ###
BLAD: Niepoprawny dystans

### Jazda ###
BLAD: Wlacz silnik

### Uruchomienie samochodu ###
BLAD: Brak paliwa, zatankuj

### Tankowanie ###
Zatankowales 10 litrow

### Jazda ###
BLAD: Wlacz silnik

### Uruchomienie samochodu ###
Silnik zostal wlaczony

### Jazda ###
Przejechales 20 km

### Tankowanie ###
BLAD: Wylacz samochod przed tankowaniem

### Zatrzymanie samochodu ###
Silnik zostal wylaczony

### Tankowanie ###
BLAD: Niepoprawna ilosc paliwa do zatankowania

### Tankowanie ###
Zatankowales 32 litrow

### Uruchomienie samochodu ###
Silnik zostal wlaczony

### Jazda ###
Przejechales 20 km

### Jazda ###
Przejechales 380 km

### Zatrzymanie samochodu ###
Silnik zostal wylaczony

### Prezentacja ###
Identyfikator samochodu: 1
Samochod jest wylaczony
Pojemnosc baku wynosi 40 litrow
Srednie spalanie wynosi 10 litrow / 100 km
W baku jest 0 litrow paliwa

#############################################################
### Test serwisowy ###

1. Tankowanie do pelna:
### Tankowanie ###
Zatankowales 40 litrow
2. Jazda testowa: 10 km:
### Uruchomienie samochodu ###
Silnik zostal wlaczony

### Jazda ###
Przejechales 10 km

### Zatrzymanie samochodu ###
Silnik zostal wylaczony

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator samochodu: 1
Samochod jest wylaczony
Pojemnosc baku wynosi 40 litrow
Srednie spalanie wynosi 10 litrow / 100 km
W baku jest 39 litrow paliwa

#############################################################
### Test serwisowy ###

1. Tankowanie do pelna:
### Tankowanie ###
Zatankowales 1 litrow
2. Jazda testowa: 5 km:
### Uruchomienie samochodu ###
Silnik zostal wlaczony

### Jazda ###
Przejechales 5 km

### Zatrzymanie samochodu ###
Silnik zostal wylaczony

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator samochodu: 1
Samochod jest wylaczony
Pojemnosc baku wynosi 40 litrow
Srednie spalanie wynosi 10 litrow / 100 km
W baku jest 39.5 litrow paliwa

#############################################################
### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###

1. Tankowanie do pelna:
### Tankowanie ###
Zatankowales 0.5 litrow
2. Jazda testowa: 20 km:
### Uruchomienie samochodu ###
Silnik zostal wlaczony

### Jazda ###
Przejechales 20 km

### Zatrzymanie samochodu ###
Silnik zostal wylaczony

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator samochodu: 1
Samochod jest wylaczony
Pojemnosc baku wynosi 40 litrow
Srednie spalanie wynosi 10 litrow / 100 km
W baku jest 39.5 litrow paliwa

*/
