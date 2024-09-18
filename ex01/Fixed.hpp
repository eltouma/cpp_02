/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:48:56 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/18 16:46:55 by eltouma          ###   ########.fr       */
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
	int	getRawBits(void) const;
	float	toFloat(void) const;
	int	toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
