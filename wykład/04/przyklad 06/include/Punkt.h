#pragma once

class Punkt{
public:
    Punkt();
    Punkt(double x, double y);
    ~Punkt();

    void SetX(double x);
    void SetY(double y);
    double GetX() const;
    double GetY() const;

    static int GetN(){
        return n;
    }
    static void SetN(int value){
        // _x = value; //blad 
        n = value;
    }

private:
    double _x = 0;
    double _y = 0;
    static int n; //tylko deklaracja, nie definicja
};

inline void Punkt::SetX(double x){
    _x = x;
    // n = x; //Ale to nie jest blad
}
inline void Punkt::SetY(double y){
    _y = y;
}