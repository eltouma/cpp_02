#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(const Point& obj) : _x(obj.getPointX()), _y(obj.getPointY())
{
}

Point & Point::operator=(const Point& rhs)
{
	(void)rhs;
	return (*this);
}

Point::~Point(void)
{
}

Fixed	Point::getPointX(void) const
{
	return (this->_x);
}

Fixed	Point::getPointY(void) const
{
	return (this->_y);
}

std::ostream & operator<<(std::ostream & o_stream, Point const & i)
{
	o_stream << "x: " << i.getPointX() << "; y: " << i.getPointY();
	return (o_stream);
}
