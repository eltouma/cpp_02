
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

//	std::cout << a_x << " *  (" << b_y << " - " << c_y << ") + " <<  b_x << "* (" << c_y << " - " << a_y << ") + " << c_x << " * (" << a_y <<" - " << b_y << ")) / 2.0)" << std::endl;
	return abs((a_x * (b_y - c_y) + b_x * (c_y - a_y) + c_x * (a_y - b_y)) / 2.0);
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	float ABC;
	float PBC;
	float PAC;
	float PAB;
	float result;

	ABC = calcul_area(a, b, c);
	PBC = calcul_area(point, b, c);
	PAC = calcul_area(a, point, c);
	PAB = calcul_area(a, b, point);
	result = PBC + PAC + PAB;

/*
	std::cout << "PBC: " << PBC << std::endl; 
	std::cout << "PAC: " << PAC << std::endl; 
	std::cout << "PAB: " << PAB << std::endl; 
	std::cout << "ABC: " << ABC << std::endl << "result: "<< result << std::endl;
*/
	if (ABC == result)
	{
		if (PBC == 0 || PAC == 0 || PAB == 0)
		{
			std::cout << "False" << std::endl;
			return (false);
		}
		std::cout << "True" << std::endl;
		return (true);
	}
	std::cout << "False" << std::endl;
	return (false);
}
