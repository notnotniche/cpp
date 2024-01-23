#include "Fixed.hpp"
#include "Point.hpp"


int main( void ) {
	Point a(0,0);
	Point b(5,1.5);
	Point c(1.3,2.5);
	Point d(1,1);
	if (bsp(d,a,b,c) == 1)
		std::cout << "Its inside the triangle" << std::endl;
	else
		std::cout << "its not looser" << std::endl;
return 0;
}