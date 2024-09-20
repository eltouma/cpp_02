/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:35:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/18 19:13:08 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed(void) : _fixedPoint(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(int const n)
{
//	std::cout << "Int constructor called" << std::endl;
	if (n <= -8388607 || n >= 8388607)
		throw std::invalid_argument("Int is not valid");
	_fixedPoint = n << _bits;
}

Fixed::Fixed(float const n)
{
//	std::cout << "Float constructor called" << std::endl;
	if (n >= 8388607.1 && n <= -8388607.1)
		throw std::invalid_argument("Float is not valid");
	_fixedPoint = roundf(n * (1 << _bits));
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(const Fixed& rhs)
{
	if (this != &rhs)
		_fixedPoint = rhs.getRawBits(); 
	return (*this);
}

int Fixed::operator>(const Fixed& rhs)
{
	return (_fixedPoint > rhs.getRawBits()); 
}

int Fixed::operator<(const Fixed& rhs)
{
	return (_fixedPoint < rhs.getRawBits()); 
}

int Fixed::operator>=(const Fixed& rhs)
{
	return (_fixedPoint >= rhs.getRawBits()); 
}

int Fixed::operator<=(const Fixed& rhs)
{
	return (_fixedPoint <= rhs.getRawBits()); 
}

int Fixed::operator==(const Fixed& rhs)
{
	return (_fixedPoint == rhs.getRawBits()); 
}

int Fixed::operator!=(const Fixed& rhs)
{
	return (_fixedPoint != rhs.getRawBits()); 
}

float Fixed::operator+(const Fixed& rhs)
{
	return (this->toFloat() + rhs.toFloat());
}

float Fixed::operator-(const Fixed& rhs)
{
	return (toFloat() - rhs.toFloat());
}

float Fixed::operator*(const Fixed& rhs)
{
	return (toFloat() * rhs.toFloat()); 
}

float Fixed::operator/(const Fixed& rhs)
{
	if (rhs.getRawBits() == 0)
		throw std::invalid_argument("ZeroDivisionError (divided by 0)");
	return (_fixedPoint / rhs.getRawBits()); 
}

Fixed&  Fixed::operator++()
{
	_fixedPoint += 1; // << _bits;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++*this;
	return tmp;
}

Fixed& Fixed::operator--()
{
	_fixedPoint -= 1; //  << _bits;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--*this;
	return tmp;
}

/*
Fixed	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.toFloat() <= b.toFloat())
		return a;
	return b;
}

*/

float	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.toFloat() <= b.toFloat())
		return a.toFloat();
	return b.toFloat();
}

/*
float	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.toFloat() >= b.toFloat())
		return a.toFloat();
	return b.toFloat();
}
*/

float	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.toFloat() >= b.toFloat())
		return a.toFloat();
	return b.toFloat();
}

int Fixed::getRawBits(void) const
{
	return (_fixedPoint);
}

int	Fixed::toInt(void) const
{
	return _fixedPoint / (1 << this->_bits);
}

float	Fixed::toFloat(void) const
{
	return (float)_fixedPoint / float(1 << this->_bits);
}

std::ostream & operator<<(std::ostream & o_stream, Fixed const & instance)
{
	o_stream << instance.toFloat();
	return (o_stream);
}
