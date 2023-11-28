#include <iostream>
#include <string>

using namespace std;

class Point 
{ 
public: 
	Point() : m_x(0.0),  m_y(0.0), m_Opis("")
	{ 
        cout << "Konstruktor domniemany Point(" << m_Opis << ").\n"; 
    }

	Point(double x, double y, const string& Opis = "") : m_x(x), m_y(y), m_Opis(Opis)
	{
        cout << "Konstruktor Point(" << m_Opis << ").\n"; 
        }

	Point(Point& K) // 🎅🎅🎅 KONTRUKTOR KOPIUJACY
	{ 
		m_Opis = K.m_Opis;
		m_x = K.m_x;
		m_y = K.m_y;
		cout << "Konstruktor kopiujący Point(" << K.m_Opis << ").\n"; 
	}

	~Point()
	{ cout << "Destruktor Point(" << m_Opis << ").\n"; }
	
	void print();
	void SetOpis(string Opis) // 🎅🎅🎅 KONTRUKTOR KOPIUJACY
	{m_Opis = Opis; }

private: 
	double m_x; 
	double m_y; 
	string m_Opis;
}; 
/////////////////////////////////////////////////////////////////////////
void Point::print() 
{ 
	if(m_Opis.length() > 0)
		cout << m_Opis << "(x, y) = " << m_x << ", " <<  m_y << endl;
	else
		cout << "<bez_nazwy> " << "(x, y) = " << m_x << ", " <<  m_y << endl;
} 
/////////////////////////////////////////////////////////////////////////
int main()
{
	cout << "----------- Start ----------------\n";

	Point aPoint(1, 1, "pierwszy");
    // Konstruktor Point(pierwszy).

	Point bPoint = aPoint;	//dziala konstruktor kopiujacy, a nie operator =
	// Point bPoint(aPoint);
	//Konstruktor kopiujący Point(pierwszy).

	Point cPoint;
    // Konstruktor domniemany Point().
	cPoint = bPoint;
    // brak komientarze zwrotnych

	aPoint.print();
	bPoint.print();
	cPoint.print();

	bPoint.SetOpis("drugi");
	cPoint.SetOpis("trzeci");
}

// pierwszy(x, y) = 1, 1
// pierwszy(x, y) = 1, 1
// pierwszy(x, y) = 1, 1
// Destruktor Point(trzeci).
// Destruktor Point(drugi).
// Destruktor Point(pierwszy).
