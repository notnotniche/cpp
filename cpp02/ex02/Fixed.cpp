#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int Param)
{
    std::cout << "Int Constructor Called" << std::endl;
    this->_fixedPoint = (Param << _FractionalBits);
}

Fixed::Fixed(const float Param)
{
    std::cout << "Float Constructor Called" << std::endl;
    this->_fixedPoint = int(roundf(Param * (1 << _FractionalBits)));
}


Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    _fixedPoint = other._fixedPoint;
    std::cout << "Copy constructor was called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &rhs)
{
    _fixedPoint = rhs._fixedPoint;
    std::cout << "Copy assignement operator Called" << std::endl;
    return *this;
}

bool Fixed::operator>(const Fixed &rhs)
{
    return (this->_fixedPoint > rhs._fixedPoint);
}

bool Fixed::operator<(const Fixed &rhs)
{
    return (this->_fixedPoint < rhs._fixedPoint);
}

bool Fixed::operator>=(const Fixed &rhs)
{
    return (this->_fixedPoint >= rhs._fixedPoint);
}

bool Fixed::operator<=(const Fixed &rhs)
{
    return (this->_fixedPoint <= rhs._fixedPoint);
}

bool Fixed::operator==(const Fixed &rhs)
{
    return (this->_fixedPoint == rhs._fixedPoint);
}

bool Fixed::operator!=(const Fixed &rhs)
{
    return (this->_fixedPoint != rhs._fixedPoint);
}

Fixed Fixed::operator+(const Fixed &rhs)
{
    Fixed ret;

    ret.setRawBits(this->_fixedPoint + rhs._fixedPoint);
    return ret;
}

Fixed Fixed::operator-(const Fixed &rhs)
{
    Fixed ret;

    ret.setRawBits(this->_fixedPoint - rhs._fixedPoint);
    return ret;
}

Fixed &Fixed::operator++()
{
    this->_fixedPoint++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->_fixedPoint--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->_fixedPoint--;
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &rhs)
{
    Fixed ret;
    if (rhs._fixedPoint == 0)
    {  
        std::cout << "Dividing by 0 is illegal you will go to jail now" << std::endl;
        ret.setRawBits(this->_fixedPoint);
    }
    else
        ret.setRawBits((this->_fixedPoint * (1 << _FractionalBits)) / rhs._fixedPoint);
    return ret;
}

Fixed Fixed::operator*(const Fixed &rhs)
{
    Fixed ret;

    ret.setRawBits(this->_fixedPoint * rhs._fixedPoint >> _FractionalBits);
    return ret;
}

int Fixed::getRawBits(void) const
{
    std::cout << "GetRawBits function called" << std::endl;
    return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
    return float(this->_fixedPoint) / (1 << _FractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_fixedPoint >> _FractionalBits;
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}
