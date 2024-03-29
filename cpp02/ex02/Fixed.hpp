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
        Fixed operator+(const Fixed &rhs);
        Fixed operator-(const Fixed &rhs);
        Fixed operator/(const Fixed &rhs);
        Fixed operator*(const Fixed &rhs);
        bool operator>(const Fixed &rhs) const;
        bool operator>=(const Fixed &rhs);
        bool operator<(const Fixed &rhs) const;
        bool operator<=(const Fixed &rhs);
        bool operator==(const Fixed &rhs);
        bool operator!=(const Fixed &rhs);
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
    private:
        int _fixedPoint;
        static int const _FractionalBits = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif