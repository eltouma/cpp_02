pragma once

#include "Fixed.hpp"

class	Point
{
	Fixed const _x;
	Fixed const _y;

public:
	Point(void);
	Point(float const x, float const y);
	Point(float Point& x, float Point& y);
	~Point(void);
	Point& operator=(const Point& rhs);
	bool bsp( Point const a, Point const b, Point const c, Point const point);
};

std::ostream & operator<<(std::ostream & o, Point const & i);
