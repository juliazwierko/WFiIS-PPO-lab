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
// * archiwum powinno zawierać katalog z zadaniem lab10/
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
// * kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod) i cpp (definicje)
// * !!! Zadanie na maks. liczbe punktow powinno sie charakteryzowac prawidlowym zastosowaniem tzw. "rule of 0/3/5"
// *     tzn. w obrebie kazdej klasy zdefiniuj tylko i wylacznie te skladowe z ponizej wymienionych, ktore sa niezbedne 
// *     do jej prawidlowego dzialania (z punktu widzenia poznizszego kodu):
// *     destruktor, konstruktor kopiujący, operator przypisania, konstruktor przenoszący, przenoszący operator przypisania



#include <iostream>
#include "Product.h"
#include "ShopA.h"
#include "ShopB.h"
#include "ShopC.h"

using namespace std;


int main(int argc, char** argv) 
{
	Product e1(1, 5);
	e1.Print();
	Product e2(2, 3);
	Product e3(3, 17);
	Product e4(4, 9);
	Product e5(5, 1);

	
	cout << "============================================" << endl;

	// Obiekt oparty o tablice statyczna o rozmiarze >= 10
	ShopA SA1;
	SA1.Print();
	SA1.Remove();
	SA1.Add(e2);
	SA1.Add(e3);
	SA1.Print();
	SA1.Remove();
	SA1.Print();
	SA1.Add(e4);
	SA1.Print();
	
	ShopA SA2(SA1);
	ShopA SA3 = SA1;
	ShopA SA4;
	SA4 = SA1;
	SA1.Clear();
	SA1.Add(e4);
	SA1.Add(e5);
	SA1.Print();
	SA2.Print();
	SA3.Print();
	SA4.Print();
	
	cout << "============================================" << endl;
	
	// Obiekt oparty o tablice dynamiczna (new, delete) o rozmiarze >= 10
	ShopB SB1;
	SB1.Print();
	SB1.Remove();
	SB1.Add(e2);
	SB1.Add(e3);
	SB1.Print();
	SB1.Remove();
	SB1.Print();
	SB1.Add(e4);
	SB1.Print();
	
	ShopB SB2(SB1);
	ShopB SB3 = SB1;
	ShopB SB4;
	SB4 = SB1;
	SB1.Clear();
	SB1.Add(e4);
	SB1.Add(e5);
	SB1.Print();
	SB2.Print();
	SB3.Print();
	SB4.Print();
	
	cout << "============================================" << endl;
	
	// Obiekt oparty o tablice dynamiczna (new, delete) o rozmiarze >= 10
	ShopC SC1;
	SC1.Print();
	SC1.Remove();
	SC1.Add(e2);
	SC1.Add(e3);
	SC1.Print();
	SC1.Remove();
	SC1.Print();
	SC1.Add(e4);
	SC1.Print();
	
	ShopC SC2(SC1);
	ShopC SC3 = SC1;
	ShopC SC4;
	SC4 = SC1;
	SC1.Clear();
	SC1.Add(e4);
	SC1.Add(e5);
	SC1.Print();
	SC2.Print();
	SC3.Print();
	SC4.Print();

	ShopC SC5 = std::move(SC4);
	SC4.Print();
	SC5.Print();
	ShopC SC6;
	SC6 = std::move(SC5);
	SC5.Print();
	SC6.Print();
	
	

	return 0;
}

/** Wynik dzialania programu:
typ: 1, ilosc sztuk: 5
============================================
---
# Zawartosc/sklad:
---
BLAD: Pusto !
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 3, ilosc sztuk: 17
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
============================================
---
# Zawartosc/sklad:
---
BLAD: Pusto !
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 3, ilosc sztuk: 17
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
============================================
---
# Zawartosc/sklad:
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 3, ilosc sztuk: 17
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 4, ilosc sztuk: 9
---
*/
