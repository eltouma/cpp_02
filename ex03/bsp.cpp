
#include "Point.hpp"
#include "Fixed.hpp"

float	Point::calcul_area(Point const a, Point const b, Point const c)
{
	float	a_x = a.getPointX().toFloat();
	float	a_y = a.getPointY().toFloat();
	float	b_x = b.getPointX().toFloat();
	float	b_y = b.getPointY().toFloat();
	float	c_x = c.getPointX().toFloat();
	float	c_y = c.getPointY().toFloat();

	return ((a_x * (b_y - c_y) + b_x * (c_y - a_y) + c_x * (a_y - b_y)) / 2.0);
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	float ABC;
	float BPC;
	float APC;
	float APB;
	float result;

	ABC = calcul_area(a, b, c);
	BPC = calcul_area(point, b, c);
	APC = calcul_area(a, point, c);
	APB = calcul_area(a, b, point);
	result = BPC + APC + APB;

	if (ABC == result && BPC > 0 && APC > 0 && APB > 0)
	{
		std::cout << "True" << std::endl;
		return (true);
	}
	std::cout << "False" << std::endl;
	return (false);
}
