/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:35:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/16 17:36:15 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(int const n)
{
	if (n >= 8388607)
		std::cout << "Error 1" << std::endl;
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = n << _bits;
}

Fixed::Fixed(float const n)
{
	if (n >= 8388607.1 && n <= -8388607.1)
		std::cout << "Error" << std::endl;
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(n * (1 << _bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_fixedPoint = rhs.getRawBits(); 
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (_fixedPoint);
}

int	Fixed::toInt(void) const
{
	return _fixedPoint / float(1 << this->_bits);
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
