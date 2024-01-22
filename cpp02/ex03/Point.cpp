#include "Point.hpp"

Point::Point() : _x(Fixed(0)) , _y(Fixed(0))
{
    // std::cout << "Default point constructor called twice" << std::endl;
    // std::cout << _x << "         " << _y ;
}

Point::~Point() 
{
    // std::cout << "POINT IS DESTROYED" << std::endl;
}

Point::Point(const float x, const float y) : _x(Fixed(x)) , _y(Fixed(y))
{
    // std::cout << "Float point constructror called twice" << std::endl;
    // std::cout << _x << "         " << _y << std::endl;
}

Point::Point(const Point &other) : _x(other._x) , _y(other._y)
{
}

Point &Point::operator=(const Point& rhs)
{
    (void)rhs;
    std::cout << " CONST VARIABLES CANT BE CHANGED" << std::endl;
    return (*this);
}

Fixed Point::getX(void) const
{
    // std::cout << "x is equal to " << this->_x  << std::endl;
    return (this->_x);
}

Fixed Point::getY(void) const
{
    // std::cout << "x is equal to " << this->_y  << std::endl;
    return (this->_y);
}