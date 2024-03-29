#ifndef FIXED_HPP
#define FIXED_HPP

#include <string.h>
#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed(const int Param);
        Fixed(const float Param);

        Fixed &operator=(const Fixed &rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
    private:
        int _fixedPoint;
        static int const _FractionalBits = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif