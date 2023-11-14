#pragma once
#include <iostream>
using namespace std;

class MapPoint{
public:
    MapPoint(double x, double y);
    MapPoint();
    ~MapPoint();

    void print() const;
    double distanceVal(const MapPoint point) const;
    double GetX() const;
    double GetY() const;
    MapPoint cpyNullIsland(MapPoint point);
    static int NMapPoint;
private:
    double _x;
    double _y;
};

