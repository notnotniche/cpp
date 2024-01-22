#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

class Point
{
    private :
        Fixed const _x;
        Fixed const _y;
    public :
        Point();
        Point(const float x, const float y);
        Point(const Point &other);
        ~Point();
        Fixed getX(void) const;
        Fixed getY(void) const;

        Point &operator=(const Point &rhs);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif