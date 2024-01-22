#include "Point.hpp"

float sign(Point const point, Point const a, Point const b)
{
	return ((point.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - b.getY().toFloat()) - (a.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	float d1 = ((point.getX().toFloat() - b.getX().toFloat())
		* (a.getY().toFloat() - b.getY().toFloat()) - (a.getX().toFloat() - b.getX().toFloat())
		* (point.getY().toFloat() - b.getY().toFloat()));
    std::cout << " this is d1 " << d1 << std::endl;
	float d2 = ((point.getX().toFloat() - c.getX().toFloat())
		* (b.getY().toFloat() - c.getY().toFloat()) - (b.getX().toFloat() - c.getX().toFloat())
		* (point.getY().toFloat() - c.getY().toFloat()));
    std::cout << " this is d2 " << d2 << std::endl;
	float d3 = ((point.getX().toFloat() - a.getX().toFloat())
		* (c.getY().toFloat() - a.getY().toFloat()) - (c.getX().toFloat() - a.getX().toFloat())
		* (point.getY().toFloat() - a.getY().toFloat()));
     std::cout << " this is d3 " << d2 << std::endl;

	bool negativ = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool positiv = (d1 > 0) || (d2 > 0) || (d3 > 0);

	if ((negativ && !positiv) || (!negativ && positiv))
		return (true);
	else
		return (false);
}