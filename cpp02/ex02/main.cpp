#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed a1(18);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( b, c ) << std::endl;
	std::cout << Fixed::max( a1, a ) << std::endl;
	std::cout << Fixed::min( b, c ) << std::endl;
	std::cout << Fixed::min( a1, a ) << std::endl;
return 0;
}