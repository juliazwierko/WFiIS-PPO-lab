#pragma once 

class Punkt
{
public:
	void SetX(double x);
	void SetY(double y);
	double GetX() const;
	double GetY() const;

private:
	double _x;
	double _y;
};
/////////////////////////////////////////////////////////////////////////
inline void Punkt::SetX(double x)
{
	_x = x;
}
/////////////////////////////////////////////////////////////////////////
inline void Punkt::SetY(double y)
{
	_y = y;
}
