/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:48:56 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/18 18:12:36 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <cmath>

class 	Fixed
{
	int	_fixedPoint;
	static int const	_bits;

public:
	Fixed(void);
	Fixed(const Fixed& obj);
	Fixed(int const n);
	Fixed(float const n);
	~Fixed(void);
	Fixed & operator=(const Fixed& rhs);
	int operator>(const Fixed& rhs);
	int operator<(const Fixed& rhs);
	int operator>=(const Fixed& rhs);
	int operator<=(const Fixed& rhs);
	int operator==(const Fixed& rhs);
	int operator!=(const Fixed& rhs);
	float operator+(const Fixed& rhs);
	float operator-(const Fixed& rhs);
	float operator*(const Fixed& rhs);
	float operator/(const Fixed& rhs);
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	int	getRawBits(void) const;
	float	toFloat(void) const;
	int	toInt(void) const;
	static float min(Fixed& a, Fixed& b);
	static float min(const Fixed& a, const Fixed& b);
	static float max(Fixed& a, Fixed& b);
	static float max(const Fixed& a, const Fixed& b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
