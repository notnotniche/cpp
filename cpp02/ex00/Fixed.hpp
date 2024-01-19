#ifndef FIXED_HPP
#define FIXED_HPP

#include <string.h>
#include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);

        Fixed &operator=(const Fixed &rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);
    private:
        int _fixedPoint;
        static int const _FractionalBits = 8;
};

#endif