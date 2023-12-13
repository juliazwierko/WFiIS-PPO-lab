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
// * archiwum powinno zawierać katalog z zadaniem lab09/
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
// * ! zadanie mozna zrealizowac wykorzystujac dowolna strukture danych (tablica statyczna, dynamiczna, std::array, std:vector itp.)



#include <iostream>
#include <vector>
#include <string>
#include "Product.h"
#include "Shop.h"

using namespace std;


int main(int argc, char** argv) 
{
	Product e1(1, 5);
	e1.Print();
	Product e2(2, 3);
	Product e3(3, 17);
	Product e4(4, 9);
	Product e5(5, 1);
	Product e6(6, 7);
	Product e7(7, 4);
	Product e8(8, 2);
	
	//Product e9(9, 8);
	int type_id = 9;
	Product e9 = Product(type_id);
	e9.Print();
	e9.SetCard(8);
	e9.Print();
	
	// porownanie stanu ilosciowego
	int r;
	r = Compare(e8, e2);
	cout << r << endl;
	r = Compare(e2, e8);
	cout << r << endl;
	r = Compare(e8, Product(30));
	cout << r << endl;
	// r = Compare(e8, 30);	// nie moze sie kompilowac !
	Product e10 = static_cast<Product>(50);
	e10.Print();
	r = Compare(e8, static_cast<Product>(80));
	cout << r << endl;
	
	type_id = int(e8);
	cout << type_id << endl;
	
	// przy implementacji tych konwersji mozesz uzyc std::to_string(int)
	string e8_str = e8.ToString();
	cout << "e8_str: " << e8_str << endl;
	string e9_str = e9;
	cout << "e9_str: " << e9_str << endl;

	
	Product* t[3];
	t[0] = &e4;
	t[1] = &e5;
	t[2] = &e6;
	
	vector<Product> v;
	v.push_back(e7);
	v.push_back(e8);
	v.push_back(e9);

	
	Shop S1;
	S1.Print();
	S1.Remove();
	
	Shop S2(e1);
	S2.Print();
	
	Shop S3(e2, e3);
	S3.Print();
	S3.Remove();
	S3.Print();
	S3.Remove();
	S3.Print();
	S3.Add(e3);
	S3.Add(e2);
	S3.Print();
	
	Shop S4(3, t);
	S4.Print();
	e5.SetCard(13);
	e5.Print();
	S4.Print();
	
	Shop S5(v);
	S5.Print();
	v.clear();
	S5.Print();
	
	Shop S6(S4);
	S6.Print();
	S6.Clear();
	S6.Print();
	S4.Print();
	
	Shop S7(S5);
	S7.Print();
	S7.Clear();
	S7.Print();
	S5.Print();

	Shop S8 = std::move(S5);
	S8.Print();
	S5.Print();

	// suma wszystkich sztuk
	int sum;
	sum = int(S5);
	cout << sum << endl;
	sum = int(S8);
	cout << sum << endl;
	
	
	return 0;
}

/** Wynik dzialania programu:
typ: 1, ilosc sztuk: 5
typ: 9, ilosc sztuk: 0
typ: 9, ilosc sztuk: 8
-1
1
1
typ: 50, ilosc sztuk: 0
1
8
e8_str: <typ=8, ilosc=2>
e9_str: <typ=9, ilosc=8>
---
# Zawartosc/sklad:
---
BLAD: Pusto !
---
# Zawartosc/sklad:
typ: 1, ilosc sztuk: 5
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
---
---
# Zawartosc/sklad:
typ: 3, ilosc sztuk: 17
typ: 2, ilosc sztuk: 3
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 6, ilosc sztuk: 7
---
typ: 5, ilosc sztuk: 13
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 6, ilosc sztuk: 7
---
---
# Zawartosc/sklad:
typ: 7, ilosc sztuk: 4
typ: 8, ilosc sztuk: 2
typ: 9, ilosc sztuk: 8
---
---
# Zawartosc/sklad:
typ: 7, ilosc sztuk: 4
typ: 8, ilosc sztuk: 2
typ: 9, ilosc sztuk: 8
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 6, ilosc sztuk: 7
---
---
# Zawartosc/sklad:
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 6, ilosc sztuk: 7
---
---
# Zawartosc/sklad:
typ: 7, ilosc sztuk: 4
typ: 8, ilosc sztuk: 2
typ: 9, ilosc sztuk: 8
---
---
# Zawartosc/sklad:
---
---
# Zawartosc/sklad:
typ: 7, ilosc sztuk: 4
typ: 8, ilosc sztuk: 2
typ: 9, ilosc sztuk: 8
---
---
# Zawartosc/sklad:
typ: 7, ilosc sztuk: 4
typ: 8, ilosc sztuk: 2
typ: 9, ilosc sztuk: 8
---
---
# Zawartosc/sklad:
---
0
14
*/