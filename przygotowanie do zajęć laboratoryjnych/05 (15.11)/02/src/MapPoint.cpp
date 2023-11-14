#include "MapPoint.h"
#include <cmath>

MapPoint::MapPoint(double x, double y){
        ++NMapPoint;
        _x = x;
        _y = y;
}

MapPoint::MapPoint(){
        ++NMapPoint;
        _x = 0;
        _y = 0;
}

MapPoint::~MapPoint(){
}

double MapPoint::GetX() const{
    return _x;
}
double MapPoint::GetY() const{
    return _y;
}

void MapPoint::print() const{
    cout << "Point: (" << _x << ", " << _y << ")\n";
}

double MapPoint::distanceVal(const MapPoint point) const{
    ++NMapPoint;
    double latitude = abs(point.GetX() - _x);
    double longitude = abs(point.GetY() - _y);
    latitude *= latitude;
    longitude *= longitude;
    double wynik = sqrt(latitude+longitude);
    return wynik;
}

int MapPoint::NMapPoint = 0;