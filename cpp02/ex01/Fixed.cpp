#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixedPoint = 0;
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
    this->_fixedPoint = roundf(Param * (1 << _FractionalBits));
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
