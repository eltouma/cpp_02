/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:35:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/13 18:37:07 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// *this c'est le pointeur sur mon instance en cours.
// au lieu de faire this->content = obj.content avec une struct (deep copy)
// w 
Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	//	*this = obj;
	this->_fixedPoint = obj._fixedPoint;
}

Fixed::Fixed(int const n)
{
	//if (n > 2**-127)
	// if (n > 2e126)
	if (n >= 8388607)
		//	if (n >= 1.67772e+07)
//	if (n > 2.3509886e-38)
		std::cout << "Va chier poulet" << std::endl;
	//	else
	//	{
	std::cout << __func__ << " member function called" << std::endl;
	this->_fixedPoint = n << this->_bits;
	//	}
}

Fixed::Fixed(float const n)
{
	//	float ni = 1 << 24;

	//	std::cout << " n " << ni << "\n";
	//if (n > 2e-127)
	//	if (n >= 1.67772e+07)
	if (n >= 8388607.1)
//	if (n > 2.3509886e-38)
		std::cout << "Va chier poulet" << std::endl;
	//	else
	//	{
	std::cout << __func__ << " member function called" << std::endl;
	this->_fixedPoint = roundf(n * (1 << this->_bits));
	//	}
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits(); 
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << __func__ << " member function called" << std::endl;
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << __func__ << " member function called" << std::endl;
	this->_fixedPoint = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_fixedPoint / (float)(1 << this->_bits);
}

std::ostream & operator<<(std::ostream & o_stream, Fixed const & instance)
{
	o_stream << instance.toFloat();
	return (o_stream);
}
