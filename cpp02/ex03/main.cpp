#include "Fixed.hpp"
#include "Point.hpp"



int main( void ) {
	Point a(1,1);
	Point b(2,4);
	Point c(3,4);
	Point d(1,1);

	if (CheckIfTriangle(a,b,c) == false) 
		return (std::cout << "not a triangle" << std::endl , 0);
	if (bsp(d,a,b,c) == 1)
		std::cout << "Its inside the triangle" << std::endl;
	else
		std::cout << "its not looser" << std::endl;
return 0;
}