#include "Fixed.hpp"

const int  Fixed::_bits = 8;

Fixed::Fixed(){
	_entier = 0;
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (_entier);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" << std::endl;
	_entier = raw;
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	_entier = copy.getRawBits();
	return (*this);
}