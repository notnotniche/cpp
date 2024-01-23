#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor was called" << std::endl;
    _fixedPoint = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignement operator Called" << std::endl;
	 _fixedPoint = rhs.getRawBits();
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