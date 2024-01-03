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
// * archiwum powinno zawierać katalog z zadaniem lab11/
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



#include <iostream>
#include "Functor.h"

using namespace std;

void porownaj(int a, int b, Functor& fun) 
{
	cout << a << "<" << b << " : " << fun( a, b ) << endl;
}

int main(int argc, char** argv) 
{
	Functor f;
	bool v;
	int a, b;
	
	porownaj(0, 2, f);
	porownaj(0, 0, f);
	porownaj(10, 2, f);
	porownaj(0, 5, f);
	porownaj(7, 4, f);
	porownaj(1, 8, f);
	porownaj(5, 5, f);
	porownaj(10, 5, f);
	
	cout << endl;
	
	f.wypiszStatystyki();	
	

	return 0;
}

/** Wynik dzialania programu:
0<2 : 1
0<0 : 0
10<2 : 0
0<5 : 1
7<4 : 0
1<8 : 1
5<5 : 0
10<5 : 0

Liczba porownan:
'a' mniejsze 'b': 3
'a' rowne 'b': 2
'a' wieksze 'b': 3
*/
