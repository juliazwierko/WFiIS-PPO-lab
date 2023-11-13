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

private:
    double _x = 0;
    double _y = 0;
};

inline void Punkt::SetX(double x){
    _x = x;
}
inline void Punkt::SetY(double y){
    _y = y;
}