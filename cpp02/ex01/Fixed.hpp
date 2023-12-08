#ifndef FIXED_HPP
#define FIXED_HPP

#include "string"
#include "iostream"
#include "cmath"


class Fixed
{
private:
	int _entier;
	static const int _bits;
public:
	Fixed();
	Fixed(const int x);
	Fixed(const float f);
	Fixed(const Fixed &copy);
	~Fixed();

	Fixed &operator=(const Fixed &copy);

	float toFloat(void) const;
	int		toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &Fixe);


#endif