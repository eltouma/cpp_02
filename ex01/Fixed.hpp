/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:48:56 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/11 18:01:47 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class 	Fixed
{
	int	_fixedPoint;
	static int const	_bits;

public:
	Fixed(void);
	Fixed(const Fixed& obj);
//	Fixed(int const n);
	~Fixed(void);
	Fixed & operator=(const Fixed& rhs);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
