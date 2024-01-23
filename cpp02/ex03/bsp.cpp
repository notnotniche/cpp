#include "Point.hpp"

float sign (Point p1, Point p2, Point p3)
{
    return (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) - (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
}

bool CheckIfTriangle(Point const a, Point const b, Point const c)
{
	float check = a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat());
	if (check == 0)
		return false;
	else
		return true;
}

bool bsp(Point pt, Point v1, Point v2, Point v3)
{
    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(pt, v1, v2);
    d2 = sign(pt, v2, v3);
    d3 = sign(pt, v3, v1);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}