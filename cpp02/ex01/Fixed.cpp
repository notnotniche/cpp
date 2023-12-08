#include "Fixed.hpp"

const int  Fixed::_bits = 8;

Fixed::Fixed(){
	_entier = 0;
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int x)
{
	_entier = (x << _bits);
	std::cout << "Constructeur const int called" << std::endl;
}

Fixed::Fixed(const float f)
{
	_entier = (roundf(f * (1 << _bits)));
	std::cout << "Constructeur const float called" << std::endl;
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

float	Fixed::toFloat(void) const
{
	return ((float)this->_entier / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return ((this->_entier >> this->_bits));
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	_entier = copy.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& Fixe)
{
	out << Fixe.toFloat();
	return (out);
}