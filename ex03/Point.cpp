#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
/*
Ça ne fonctionne pas parce que :
For members of fundamental types, it makes no difference which of the ways above the constructor is defined, because they are not initialized by default, but for member objects (those whose type is a class), if they are not initialized after the colon, they are default-constructed.
Class Point  has a member object whose type is another class (base's type is Fixed). Because objects of class Fixed is constructed with a parameter, Point's constructor needs to call base's constructor, and the only way to do this is in the member initializer list.
Source : https://cplusplus.com/doc/tutorial/classes/

	this->_x = x;
	this->_y = y;

Si on ajoute une autre variable privée à Point qui n'est pas de type Fixed, comme int _i; par exemple, on aurait pu faire (en passant un 3ème param) :
	this->_i = i
*/
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
