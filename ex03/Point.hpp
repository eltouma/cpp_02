#pragma once

#include "Fixed.hpp"

class	Point
{
	Fixed const _x;
	Fixed const _y;

public:
	Point(void);
	Point(float const x, float const y);
	Point(const Point& obj); 
	Point & operator=(const Point& rhs);
	~Point(void);
	
	float   calcul_area(Point const a, Point const b, Point const c);	
	bool bsp( Point const a, Point const b, Point const c, Point const point);

	Fixed	getPointX(void) const;
	Fixed	getPointY(void) const;
};

std::ostream & operator<<(std::ostream & o, Point const & i);
