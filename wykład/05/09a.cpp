#include <iostream>
#include <string>

struct Miasto {
	double szer;
	double dl;
	double wys;
	std::string nazwa;
};

inline std::ostream& operator<<(std::ostream &strm, const Miasto &K) {
	return 
		strm << "Nazwa: " << K.nazwa << "\nDlugosc: " << K.dl << "\tSzeroksc: " << K.szer << "\tWysokosc: " << K.wys << std::endl;
}

int main()
{
	using namespace std;

	Miasto aMiasto;
	
	aMiasto.dl = 40;
	aMiasto.szer = 30;
	aMiasto.wys = 150;
	aMiasto.nazwa = "Krakow";

	Miasto bMiasto[5] = {
		40, 30, 150, "Krakow",
		45, 30, 50, "Warszawa",
		50, 30, 0, "Sopot"
		};

	const Miasto cMiasto = {40, 30, 150, "Krakow"};

	cout << aMiasto << bMiasto[0] << bMiasto[1] << bMiasto[2] << bMiasto[3] << cMiasto;

	Miasto dMiasto[5] = {
		{ 40, 30, 150, "Krakow"}, 
		{ 45, 30, 50, "Warszawa"},
		{ 50, 30, 0, "Sopot"},
		};

	cout << dMiasto[0] << dMiasto[1] << dMiasto[2] << dMiasto[3];

	//cMiasto.nazwa = "Krakow"; //BLAD bo obiekt typu const
}

// Nazwa: Krakow
// Dlugosc: 40     Szeroksc: 30    Wysokosc: 150
// Nazwa: Krakow
// Dlugosc: 30     Szeroksc: 40    Wysokosc: 150
// Nazwa: Warszawa
// Dlugosc: 30     Szeroksc: 45    Wysokosc: 50
// Nazwa: Sopot
// Dlugosc: 30     Szeroksc: 50    Wysokosc: 0
// Nazwa: 
// Dlugosc: 0      Szeroksc: 0     Wysokosc: 0
// Nazwa: Krakow
// Dlugosc: 30     Szeroksc: 40    Wysokosc: 150
// Nazwa: Krakow
// Dlugosc: 30     Szeroksc: 40    Wysokosc: 150
// Nazwa: Warszawa
// Dlugosc: 30     Szeroksc: 45    Wysokosc: 50
// Nazwa: Sopot
// Dlugosc: 30     Szeroksc: 50    Wysokosc: 0
// Nazwa: 
// Dlugosc: 0      Szeroksc: 0     Wysokosc: 0
