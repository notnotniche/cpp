#ifndef FIXED_HPP
#define FIXED_HPP

#include "string"
#include "iostream"


class Fixed
{
private:
	int _entier;
	static const int _bits;
public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed &operator=(const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif